fn count_positives_sum_negatives(input: Vec<i32>) -> Vec<i32> {
    let mut count = 0;
    let mut sum = 0;
    for i in &input {
        if i > &0 {
            count += 1;
        } else {
            sum += i;
        }
    }

    if input.is_empty() {
        return vec![];
    }

    vec![count, sum]
}
