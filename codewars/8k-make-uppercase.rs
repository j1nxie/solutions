fn make_upper_case(s: &str) -> String {
    let mut upper = vec![];
    for i in s.chars() {
        upper.push(i.to_uppercase().to_string())
    }

    upper.concat()
}
