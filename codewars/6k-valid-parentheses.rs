fn valid_parentheses(s: &str) -> bool {
    let mut parentheses: Vec<char> = vec![];
    for i in s.chars() {
        match i {
            '(' => parentheses.push(i),
            ')' => {
                if parentheses.pop() != Some('(') {
                    return false;
                }
            }
            _ => continue,
        }
    }
    parentheses.is_empty()
}
