fn remove_every_other(arr: &[u8]) -> Vec<u8> {
    let mut new_array = vec![];
    for i in 0..arr.len() {
        if i % 2 == 0 {
            new_array.push(arr[i]);
        }
    }
    new_array
}
