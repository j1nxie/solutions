use std::fs;

struct Sub {
    pos: Position,
}

struct Position {
    x: u32,
    y: u32,
}

impl Sub {
    fn mv(&mut self, dir: Direction) {
        match dir {
            Direction::Up(scalar) => self.pos.y -= scalar,
            Direction::Down(scalar) => self.pos.y += scalar,
            Direction::Forward(scalar) => self.pos.x += scalar,
        }
    }
}

enum Direction {
    Up(u32),
    Down(u32),
    Forward(u32),
}

impl Direction {
    fn process(s: &str) -> Direction {
        let s: Vec<&str> = s.split_ascii_whitespace().collect();
        let scalar = s[1].parse::<u32>().unwrap();
        Position {
            x: 0,
            y: 0,
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
    };

    fs::read_to_string("input.txt")
        .expect("unable to read input")
        .lines()
        .for_each(|s| sub.mv(Direction::process(s)));

    println!("{}", sub.pos.x * sub.pos.y);
}
