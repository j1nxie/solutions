use std::fs;

struct Sub {
    pos: Position,
    aim: u32
}

struct Position {
    x: u32,
    y: u32
}

impl Sub {
    fn mv(&mut self, dir: Direction) {
        match dir {
            Direction::Up(scalar) => self.aim -= scalar,
            Direction::Down(scalar) => self.aim += scalar,
            Direction::Forward(scalar) => {
                self.pos.x += scalar;
                self.pos.y += scalar * self.aim;
            }
        }
    }
}

enum Direction {
    Up(u32),
    Down(u32),
    Forward(u32)
}

impl Direction {
    fn process(s: &str) -> Direction {
        let s: Vec<&str> = s.split_ascii_whitespace().collect();
        let scalar = s[1].parse::<u32>().unwrap();
        Position {
            x: 0,
            y: 0
        };
        match s[0] {
            "up" => Direction::Up(scalar),
            "down" => Direction::Down(scalar),
            "forward" => Direction::Forward(scalar),
            _ => panic!("oops"),
        }
    }
}

fn main() {
    let mut sub = Sub {
        pos: Position {
            x: 0,
            y: 0
        },
        aim: 0
    };

    fs::read_to_string("input.txt")
        .expect("unable to read input")
        .lines()
        .for_each(|s| sub.mv(Direction::process(s)));

    println!("{}", sub.pos.x * sub.pos.y);
}
