# Exercise 04

Observe that our model of evaluation allows for combinations whose operators
are compound expressions. Use this observation to describe the behavior of the
following procedure:

```racket
(define (a-plus-abs-b a b)
  ((if (> b 0) + -) a b)
```

The procedure starts with checking whether `b` is a positive number. If it is,
it will add the two numbers `a` and `b`, as `abs(b)` is itself when `b` is
positive. If it isn't, it will subtract `b` from `a`, as `abs(b) = -b`
when `b` is negative.
