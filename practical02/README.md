# Practical 2

This practical was broken into two parts, namely `Conversion.c` and `Sum.c`.

> [!important]
> This practical was uploaded late because of the confusion of whether it should be included in the assignment.

## Conversion.c

This file dealt with the different representations of numbers in a computer. The task was to implement a way to count the number of digits in a number. Instead of using the `ceil` function after `log10f`, I used `floor + 1` which provided the correct answer in the case that the argument was an exact multiple of 10.

## Sum.c

This file dealt with floating point arithmetic. The task was to implement the same sum using a loop, once forward and once backward. I calculated the difference between the sums and printed them to the screen,
