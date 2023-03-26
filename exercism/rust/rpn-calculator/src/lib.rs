#[derive(Debug)]
pub enum CalculatorInput {
    Add,
    Subtract,
    Multiply,
    Divide,
    Value(i32),
}

pub fn evaluate(inputs: &[CalculatorInput]) -> Option<i32> {
    if inputs.is_empty() {
        return None;
    }

    let mut stack = vec![];
    for input in inputs {
        if let CalculatorInput::Value(v) = input {
            stack.push(*v);
        } else {
            let result = match (input, stack.pop(), stack.pop()) {
                (CalculatorInput::Add, Some(v2), Some(v1)) => v1 + v2,
                (CalculatorInput::Subtract, Some(v2), Some(v1)) => v1 - v2,
                (CalculatorInput::Multiply, Some(v2), Some(v1)) => v1 * v2,
                (CalculatorInput::Divide, Some(v2), Some(v1)) => v1 / v2,
                _ => return None,
            };

            stack.push(result);
        }
    }

    if stack.len() == 1 {
        Some(stack[0])
    } else {
        None
    }
}
