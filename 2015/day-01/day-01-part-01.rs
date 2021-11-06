use std::env;
use std::fs;

fn process_file(file: String) -> String {
    let contents = fs::read_to_string(file)
        .expect("uh oh. something is wrong with reading the file.");
    return contents;
}

fn calculate_floors(input: String) -> i64 {
    let mut floors = 0;
    for c in input.chars() {
        if String::from(c) == "(" {
            floors += 1;
        }
        else if String::from(c) == ")" {
            floors -= 1;
        }
    }
    return floors;
}

fn main() {
    let args: Vec<String> = env::args().collect();

    let file = &args[1];

    print!("{}", calculate_floors(process_file(file.to_string())));
    return;
}
