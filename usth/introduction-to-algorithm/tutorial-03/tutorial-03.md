# slide 7

T(n) = n^2 + 1 + 1 + n + 1 + n(n+1) + n^2 + n^2 + 1 = 4n^2 + 2n + 4

-> O(n^2)

# slide 8

T(n) = n + n^2 + n^2 + n^3 + n^3 + 1 = 2n^2 + 2n^2 + n + 1

-> O(n^3)

# slide 9

T(n) = 1 + n + 1 + n(n+1)/2 + n(n+1)/2 + (n+1)(2n+1)/6 + n(n+1)(2n+1)/6 + n(n+1)(2n+1)/6 + n(n+1)(2n+1)/6 + 1

-> O(n^3)

# slide 10

T(n) = log n + 1 + log n + log n + 1 + 1 = 3 log n + 3

-> O(log n)

# slide 11

- iteration 1: length = n
- iteration 2: length = n/2
- iteration 3: length = n/4 (4 = 22)
- iteration k: length = 1

-> n/(2k-1) = 1
-> n = 2k-1
-> log n = k log2 2 - log2 2
-> k = log2 n + 1
-> T(n) = log n + 1

-> O(log n)

# slide 12

T(n) = 1 + 2n + (n-1)n + 1 = n^2 + n + 2

-> O(n^2)

# slide 13

T(n) = 3n^2 + 2n + 2

-> O(n^2)

# slide 14

T(n) = 1 + (n+1) + n + n(n+1)/2 + 1 + n(n-1) + n(n-1)/2 + 1

-> O(n^2)

# slide 15

T(n) = 1 + n + 1 + n + n + 1 = 3n + 3

-> O(n)

# slide 16

T(n) = n + 1 + n + n(n+1) + n = n^2 + 4n + 1

-> O(n^2)

# slide 17

T(n) = n + (1 + 2 + ... + n) + 2(1 + 2 + ... + n - 1)
     = (n + (n^2 + n))/(2 + (n^2 - n)) = (n + 3n^2)/2

-> O(n^2)

# slide 18

T(n) = (n + n - 1 + n - 1 + 3(n^2 - n))/(2 + n + 1)

-> O(n^2)

# slide 19

T(n) = (n + 1 + n + 1 + 3(n^2 + n))/2 + 1

-> O(n^2)

# slide 20

T(n) = 1 + 3n + 1 = 3n + 2

-> O(n)

# slide 21

T(n) = n + n(n-1)/2 + 1 = (n^2 + n + 2)/2

-> O(n^2)

# slide 22

T(n) = (n + (n^2 + n))/2 + n(n+1)(2n+1)/3

-> O(n^3)
