use std::env;
use std::fs;

fn process_file(file: String) -> String {
    let contents = fs::read_to_string(file)
        .expect("uh oh. something is wrong reading with reading the file.");
    return contents;
}

fn count_basement(input: String) -> i64 {
    let mut count = 0;
    let mut floors: i64 = 0;
    for c in input.chars() {
        if String::from(c) == "(" {
            floors += 1;
            count += 1;
        }
        else if String::from(c) == ")" {
           floors -= 1;
           count += 1;
        }
        if floors == -1 {
            return count;
        }
    }
    return 0;
}

fn main() {
    let args: Vec<String> = env::args().collect();

    let name = &args[1];

    print!("{}", count_basement(process_file(name.to_string())));
    return;
}
