fn accum(s: &str) -> String {
    //your code
    s.chars()
        .enumerate()
        .map(|(index, curr_char)| {
            curr_char.to_string().to_uppercase()
                + &(0..index)
                    .map(|_| curr_char.to_string().to_lowercase())
                    .collect::<String>()
        })
        .collect::<Vec<_>>()
        .join("-")
}
