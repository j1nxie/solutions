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
    let mut count = 0;
    for i in 1..=1000000000 {
        if prime(i) {
            count += 1;
        }
        if count == 10001 {
            println!("{}", i);
            break;
        }
    }
}
