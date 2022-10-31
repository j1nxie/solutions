fn solution(num: i32) -> i32 {
    let mut sum = 0;
    if num < 0 {
        return sum;
    }
    for i in 1..num {
        if (i % 3 == 0) || (i % 5 == 0) {
            sum += i;
        }
    }

    sum
}
