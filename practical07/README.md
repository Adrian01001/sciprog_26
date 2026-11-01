# Practical 7

This practical dealt with pointers for arrays and their properties. 

The first exercise was about computing $e$ using the exponential series. The series successfully converged to $e$ and I did not encounter any strange behaviour for higher power terms (even when I used 1000 terms).

The second exercise made me write several functions to become familiar with passing pointers to arrays in and out of functions. To test different array sizes, the user is asked to input a desired integer length at the start of the program.

Run the code as follows:

```bash
gcc -o out SumForE.c
./out # Prints a table with lengths and estimates

gcc -o out PointersAndMemory.c
./out # Asks for an integer. Prints an array of 1's of that length
```
