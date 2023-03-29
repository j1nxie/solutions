#!r6rs

; Exercise 03
; Define a procedure that takes three numbers as argument
; and returns the sum of the squares of the two larger numbers

(define (sum_of_square x y z)
  (define largest (max x y z))
  (define second_largest (cond (= largest x) (max y z)
							   (= largest y) (max x z)
							   (= largest z) (max x y)))
  (+ (* largest largest) (* second_largest second_largest)))
