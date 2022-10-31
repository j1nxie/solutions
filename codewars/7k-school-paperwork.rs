fn paperwork(n: i16, m: i16) -> u32 {
    if (n < 0) || (m < 0) {
        return 0;
    } else {
        return (n * m) as u32;
    }
}
