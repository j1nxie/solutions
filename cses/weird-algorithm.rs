fn main() {
    let mut line = String::new();

    std::io::stdin()
        .read_line(&mut line);

    let mut x: i64 = line
        .trim()
        .parse().unwrap();

    print!("{} ", x);

    while x != 1 {
        if x % 2 == 0 {
            x /= 2;
            print!("{} ", x);
        } else {
            x = x*3 + 1;
            print!("{} ", x);
        }
    }
}
