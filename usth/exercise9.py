ones_dict = ("", "one", "two", "three", "four", "five",
         "six", "seven", "eight", "nine")
tens_dict = ("ten", "twenty", "thirty", "forty", "fifty",
        "sixty", "seventy", "eighty", "ninety")
elevens_dict = ("eleven", "twelve", "thirteen", "fourteen",
           "fifteen", "sixteen", "seventeen", "eighteen",
           "nineteen")

a = int(input("input a: "))
hundreds = a // 100
tens = a % 100
ones = tens % 10
if 11 <= tens <= 19:
    print(ones_dict[hundreds - 1], "hundred", elevens_dict[(tens % 10) - 1])
else:
    print(ones_dict[hundreds], "hundred", tens_dict[(tens // 10) - 1], ones_dict[ones])
