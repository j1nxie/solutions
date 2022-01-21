fn xo(string: &'static str) -> bool {
    let mut x_count = 0;
    let mut o_count = 0;
    for i in string.chars() {
        if i == 'x' || i == 'X' {
            x_count += 1;
        }
        if i == 'o' || i == 'O' {
            o_count += 1;
        }
    }
    if x_count == o_count {
        return true
    }
    if x_count == 0 && o_count == 0 {
        return true
    }
    false
}
