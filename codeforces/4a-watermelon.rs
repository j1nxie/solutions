fn main() {
    let mut line = String::new();

    std::io::stdin()
        .read_line(&mut line);

    let x: i8 = line
        .trim()
        .parse().unwrap();

    if (x % 2 == 0) && (x > 2) {
        println!("YES");
    } else {
        println!("NO");
    }
}
