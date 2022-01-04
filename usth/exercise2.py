A = int(input("input A: "))
for i in range(0, A + 1):
    if i % 2 == 0:
        if (i == A) or (i == A - 1):
            print(i)
        else:
            print(i, end=', ')
