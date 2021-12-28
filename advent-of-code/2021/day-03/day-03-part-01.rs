use std::fs;

fn main() {
    let input = fs::read_to_string("input.txt")
       .expect("unable to read input");
    // grab # of cols = length of 1 line
    let cols = &input.lines().next().ok_or("something broke").unwrap().len();
    // grab # of rows = # of lines of input
    let rows = input.lines().count();
    let (gamma, epsilon) = (0..*cols)
        .map(|i| input.lines().filter(|line| line.as_bytes()[i] == b'1').count())
        .fold((0,0), |(gamma, epsilon), ones| {
            if ones * 2 > rows {
                ((gamma << 1) | 1, epsilon << 1)
            } else {
                (gamma << 1, (epsilon << 1 | 1))
            }
        });
    println!("{}", gamma * epsilon);
}
