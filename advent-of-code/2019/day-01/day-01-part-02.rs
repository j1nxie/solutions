use std::fs;

fn calc(mass: f64) -> u64 {
    let mut sum = 0;
    if mass <= 0.0 {
        return sum;
    }
    let gas = (mass / 3.0).floor() - 2.0;
    sum += gas as u64 + calc(gas);
    return sum;
}

fn main() {
    let data = fs::read_to_string("input.txt")
        .expect("unable to read file");
    let mut sum = 0;
    for line in data.lines() {
        sum += calc(line.parse::<f64>().unwrap()) as u64;
    }
    println!("{}", sum);
}
