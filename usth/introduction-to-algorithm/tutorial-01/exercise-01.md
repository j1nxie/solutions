# exercise 01

write an algorithm to read three numbers then display the largest

- pseudocode:

```
BEGIN
    Read input

    largest <- input

    Read input

    IF (input > largest)
        largest <- input
    ENDIF

    Read input

    IF (input > largest)
        largest <- input
    ENDIF

    PRINT largest
END
```

- trace table:

a. 8, 9, 10

input | largest | input > largest | output
----- | ------- | --------------- | ------
8     |         |                 |
      | 8       |                 |
9     |         |                 |
      |         | true            |
      | 9       |                 |
10    |         |                 |
      |         | true            |
      | 10      |                 |
      |         |                 | 10

b. 9, 8, 8

input | largest | input > largest | output
----- | ------- | --------------- | ------
9     |         |                 |
      | 9       |                 |
8     |         |                 |
      |         | false           |
      | 9       |                 |
8     |         |                 |
      |         | false           |
      | 9       |                 |
      |         |                 | 9

c. 9, 8, 10

input | largest | input > largest | output
----- | ------- | --------------- | ------
9     |         |                 |
      | 9       |                 |
8     |         |                 |
      |         | false           |
      | 9       |                 |
10    |         |                 |
      |         | true            |
      | 10      |                 |
      |         |                 | 10

