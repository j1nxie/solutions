# exercise 02

given a positive number n from the user, write an algorithm to compute the product of all positive integers smaller than or equal to n
print the result.

- pseudocode:

```
BEGIN
    Read n

    product <- 1

    FOR (i <- 1) TO n STEP 1 DO
        product <- product · i

    PRINT product
END
```

- trace table:

n | product | i | output
- | ------- | - | ------
5 |         |   |
  | 1       |   |
  |         | 1 |
  | 1       |   |
  |         | 2 |
  | 2       |   |
  |         | 3 |
  | 6       |   |
  |         | 4 |
  | 24      |   |
  |         | 5 |
  | 120     |   |
  |         |   | 120
