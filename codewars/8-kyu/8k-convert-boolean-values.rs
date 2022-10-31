fn bool_to_word(value: bool) -> &'static str {
    match value {
        true => "Yes",
        false => "No",
    }
}
