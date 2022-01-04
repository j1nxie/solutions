def karatsuba(a, b):
    a_str = str(a);
    b_str = str(b);
    if (a < 10) or (b < 10):
        return a * b
    digits = max(a.len(), b.len())
    half = digits / 2
    top_left = str(a[:half])
    top_right = str(a[half:digits])
    bottom_left = str(b[:half])
    bottom_right = str(b[half:digits])
    x1 = karatsuba(top_left, bottom_left)
    x2 = karatsuba(top_right, bottom_right)
    x3 = karatsuba((top_left + top_right), (top_right + bottom_right))
    return x1 * 10**digits + 10**half * (x3 - x1 - x2) + x2

def main():
    print(karatsuba(3141592653589793238462643383279502884197169399375105820974944592, 2718281828459045235360287471352662497757247093699959574966967627))
