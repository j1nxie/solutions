use std::fs;

fn main() {
    let data = fs::read_to_string("input.txt")
        .expect("unable to read file");
    let mut prev: Option<u32> = None;
    let mut curr: u32;
    let mut count: u32 = 0;
    let lines: Vec<u32> = data.lines().map(|x| x.parse::<u32>().unwrap()).collect();
    for line in lines.windows(3) {
        curr = line.iter().sum::<u32>();
        if let Some(value) = prev {
            if curr > value {
                count += 1;
            }
        }
        prev = Some(curr);
    }
    println!("{}", count);
}
