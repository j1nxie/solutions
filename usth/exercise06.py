def pythagoras(a: int, b: int, c: int):
    if a**2 + b**2 == c**2:
        return True
    elif b**2 + c**2 == a**2:
        return True
    elif a**2 + c**2 == b**2:
        return True
    else:
        return False

a = int(input("input a: "))
b = int(input("input b: "))
c = int(input("input c: "))
if a + b >= c:
    if a == b == c:
        print("equilateral")
    elif a == b or b == c or a == b:
        print("isoceles")
    elif pythagoras(a, b, c):
        print("square")
    else:
        print("normal")
