fn printer_error(s: &str) -> String {
    // Your code here
    let mut sum = 0;
    for i in s.chars() {
        match i {
            'a'..='m' => continue,
            _ => sum += 1,
        }
    }

    format!("{}/{}", sum, s.len())
}
