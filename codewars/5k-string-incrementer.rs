fn increment_string(s: &str) -> String {
    let mut s = s.to_owned();
    let num: String = s.chars().filter(|c| c.is_numeric()).collect();
    for _ in 1..=num.len() {
        s.pop();
    }
    if num.is_empty() {
        return format!("{}1", s);
    } else {
        let num: String = num.chars().map(|c| c.to_digit(10).unwrap() + 1).collect();
        return format!("{}{}", s, num);
    }
}
