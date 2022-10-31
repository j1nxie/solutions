fn valid_braces(s: &str) -> bool {
    let mut parentheses: Vec<char> = vec![];

    if s.len() % 2 != 0 {
        return false;
    }

    for i in s.chars() {
        match i {
            '(' | '[' | '{' => parentheses.push(i),

            _ => {
                if !parentheses.is_empty() {
                    match i {
                        ')' => {
                            if parentheses.last().unwrap() == &'(' {
                                parentheses.pop();
                            }
                        }

                        ']' => {
                            if parentheses.last().unwrap() == &'[' {
                                parentheses.pop();
                            }
                        }

                        '}' => {
                            if parentheses.last().unwrap() == &'{' {
                                parentheses.pop();
                            }
                        }

                        _ => continue,
                    }
                }
            }
        }
    }

    parentheses.is_empty()
}
