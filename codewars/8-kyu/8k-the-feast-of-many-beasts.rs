fn feast(beast: &str, dish: &str) -> bool {
    (beast.chars().nth(0) == dish.chars().nth(0))
        && (beast.chars().nth(beast.len() - 1) == dish.chars().nth(dish.len() - 1))
}
