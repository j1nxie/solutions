a = int(input("input a: "))
b = int(input("input b: "))
if a == b:
    print("two numbers are equal")
elif a < b:
    for i in range(a, b + 1):
        if i == b:
            print(i)
        else:
            print(i, end=", ")
elif a > b:
    for i in range(b, a + 1):
        if i == a:
            print(i)
        else:
            print(i, end=", ")
