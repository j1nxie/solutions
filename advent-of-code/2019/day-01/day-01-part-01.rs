use std::fs;

fn main() {
    let data = fs::read_to_string("input.txt")
        .expect("unable to read file");
    let mut sum = 0;
    for line in data.lines() {
        let gas = ((line.parse::<f64>().unwrap() / 3.0)).floor() - 2.0;
        sum += gas as u64;
    }
    println!("{}", sum);
}
