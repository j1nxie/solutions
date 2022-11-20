fn is_valid_ip(ip: &str) -> bool {
    let octets: Vec<&str> = ip.split('.').collect();
    let mut result: bool = false;
    if octets.len() != 4 {
        result = false;
    } else {
        for i in octets {
            println!("{}", i);
            match i.parse::<u32>() {
                Ok(i) => {
                    if i in (0..=255) { result = true } else { result = false };
                }
                Err(_) => result = false,
            }
        }
    }
    result
}

fn main() {
    println!("{}", is_valid_ip("123.456.789.0"));
}
