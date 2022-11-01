fn create_phone_number(numbers: &[u8]) -> String {
    let numbers: Vec<String> = numbers.iter().map(|i| i.to_string()).collect();
    format!(
        "({}) {}-{}",
        numbers[0..3].concat(),
        numbers[3..6].concat(),
        numbers[6..10].concat(),
    )
}
