use std::fs;

fn get_values(memory: &Vec<u32>, pos: usize) -> (u32, u32) {
    let (op1, op2) = (memory[pos + 1], memory[pos + 2]);
    (memory[op1 as usize], memory[op2 as usize])
}

fn execute(mut memory: Vec<u32>) -> Vec<u32> {
    let mut pos: usize = 0;
    loop {
        let opcode = memory[pos];
        match opcode {
            1 => {
                let (v1, v2) = get_values(&memory, pos);
                let target = memory[pos + 3];
                memory[target as usize] = v1 + v2;
            },
            2 => {
                let (v1, v2) = get_values(&memory, pos);
                let target = memory[pos + 3];
                memory[target as usize] = v1 * v2;
            },
            99 => break,
            _ => {},
        }
        pos += 4;
    }
    memory
}

fn main() {
    let data = fs::read_to_string("input.txt")
        .expect("unable to read file");
    let v: Vec<u32> = data.trim().split(",").map(|s| s.parse().unwrap()).collect();
    println!("{}", execute(v.clone())[0]);
}
