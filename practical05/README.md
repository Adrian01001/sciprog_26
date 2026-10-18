# Practical 5

In this practical we used the `scanf` function and basic pointers. The first file will print a specified number of Fibonacci numbers as requested from the user. The second file asks the user for a tolerance $\delta$ and calculates two approximations for $\arctanh$ based on it. Running the files is as follows:

```bash
gcc -o fib Fibonacci.c -lm
fib
# Then input the desired number of terms, as requested

gcc -o arctanh Arctanh.c -lm
arctanh
# Then input the desired accuracy
```
