fn odd_or_even(numbers: Vec<i32>) -> String {
    if numbers.iter().sum::<i32>() % 2 == 0 {
        "even".to_string()
    } else {
        "odd".to_string()
    }
}
