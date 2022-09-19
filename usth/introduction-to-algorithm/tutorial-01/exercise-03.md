# exercise 03

write an algorithm to read two numbers then display all the odd numbers between them

- pseudocode:

```
BEGIN
    Read x
    Read y

    FOR (i <- x+1) TO y-1 DO
        IF (i mod 2 NOT 0)
            PRINT i
        ENDIF
END
```

- trace table:

a. 3, 10

x | y  | i  | i mod 2 NOT 0 | output
- | -- | -- | ------------  |
3 |    |    |               |
  | 10 |    |               | 
  |    | 4  |               |
  |    |    | false         |
  |    | 5  |               |
  |    |    | true          |
  |    |    |               | 5
  |    | 6  |               |
  |    |    | false         |
  |    | 7  |               |
  |    |    | true          |
  |    |    |               | 7
  |    | 8  |               |
  |    |    | false         |
  |    | 9  |               |
  |    |    | true          |
  |    |    |               | 9

b. 9, 3

x | y  | i  | i mod 2 NOT 0 | output
- | -- | -- | ------------  |
9 |    |    |               |
  | 3  |    |               |
  |    | 8  |               |
  |    |    | false         |
  |    | 7  |               |
  |    |    | true          |
  |    |    |               | 7
  |    | 6  |               |
  |    |    | false         |
  |    | 5  |               |
  |    |    | true          |
  |    |    |               | 5
  |    | 4  |               |
  |    |    | false         |
