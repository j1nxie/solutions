fn longest(a1: &str, a2: &str) -> String {
    let mut s = format!("{}{}", a1, a2).chars().collect::<Vec<char>>();
    s.sort();
    s.dedup();
    s.into_iter().collect()
}
