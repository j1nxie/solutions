def for_loop(A: int):
    for i in range(A, 0, -1):
        if i == 1:
            print(i)
        else:
            print(i, end=', ')

def while_loop(A: int):
    while A != 0 :
        if A == 1:
            print(A)
        else:
            print(A, end=', ')
        A -= 1

def main():
    x = int(input("input A: "))
    for_loop(x)
    while_loop(x)

if __name__ == "__main__":
    main()
