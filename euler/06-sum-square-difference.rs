fn main() {
    let sum: u64 = (100 * 101) / 2;
    let mut sum_of_square: u64 = 0;
    for i in 1..=100 {
        sum_of_square += i * i;
    }
    println!("{}", sum * sum - sum_of_square);
}
