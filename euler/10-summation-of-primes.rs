pub fn prime(number: u32) -> bool {
    if number <= 1 {
        return false;
    }
    for a in 2..=f64::sqrt(number as f64).floor() as u32 {
        if number % a == 0 {
            return false;
        }
    }
    true
}

fn main() {
    let mut sum: u64 = 0;
    for i in 1..=2000000 {
        if prime(i) {
            sum += i as u64;
        }
    }
    println!("{}", sum);
}
