use std::fs;

fn main() {
    let data = fs::read_to_string("input.txt")
        .expect("unable to read file");
    let mut prev: Option<u32> = None;
    let mut curr: Option<u32>;
    let mut count: u32 = 0;
    for line in data.lines() {
        curr = Some(line.parse::<u32>().unwrap());
        if let Some(value) = prev {
            if curr.unwrap() > value {
                count += 1;
            }
        }
        prev = curr;
    }
    println!("{}", count);
}
