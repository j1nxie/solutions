fn reverse_words(str: &str) -> String {
    str.to_string()
        .split(" ")
        .map(|sub| sub.chars().rev().collect())
        .collect::<Vec<String>>()
        .join(" ")
}
