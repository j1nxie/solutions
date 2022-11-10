pub fn prime(number: u32) -> bool {
    if number <= 1 {
        return false;
    }
    for a in 2..number {
        if number % a == 0 {
            return false;
        }
    }
    true
}

fn main() {
    let mut result = 1;
    for i in 1..=20 {
        if prime(i) {
            result *= i;
        }
    }
    println!("{}", result);
}
