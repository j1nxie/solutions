s = input("input string: ")
print(len(s))
print(s.upper())
print(s.lower())
print(s[1])
print(s[0] + "IN" + s[1:len(s)])
for i in range(0, len(s)):
    if s[i] == "s":
        has_s = True
    else:
        has_s = False
print(has_s)
