fn open_or_senior(data: Vec<(i32, i32)>) -> Vec<String> {
    let mut category: Vec<String> = Vec::new();
    for member in data {
        if member.0 >= 55 && member.1 > 7 {
            category.push("Senior".to_string());
        } else {
            category.push("Open".to_string());
        }
    }
    category
}
