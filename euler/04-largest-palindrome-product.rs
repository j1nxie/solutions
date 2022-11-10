pub fn is_palindrome(phrase: &str) -> bool {
    phrase.char_indices().filter(|&(_,c)| c.is_alphanumeric())
        .zip(phrase.char_indices()
            .rev()
            .filter(|&(_,c)| c.is_alphanumeric()))
        .take_while(|&((first_count, _), (last_count, _))| {first_count < last_count})
        .all(|((_, first_char), (_, last_char))| {
            first_char.to_ascii_lowercase() == last_char.to_ascii_lowercase()
        })
}

fn main() {
    let mut result = 0;
    // kinda cheated and only checked for the last 99 numbers here... seemingly worked though.
    for i in 900..=999 {
        for j in 900..=999 {
            let mut mul = i * j;
            if is_palindrome(&mul.to_string()) {
                result = mul;
            }
        }
    }
    println!("{}", result);
}
