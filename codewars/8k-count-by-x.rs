fn count_by(x: u32, n: u32) -> Vec<u32> {
    let mut count = vec![];

    for i in 1..=n {
        count.push(x * i);
    }

    count
}
