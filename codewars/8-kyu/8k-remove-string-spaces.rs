fn no_space(x: String) -> String {
    x.split(' ').collect::<Vec<&str>>().concat().to_string()
}
