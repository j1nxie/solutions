fn find_smallest_int(arr: &[i32]) -> i32 {
    let mut vector: Vec<i32> = arr.iter().copied().collect();
    vector.sort();
    vector[0]
}
