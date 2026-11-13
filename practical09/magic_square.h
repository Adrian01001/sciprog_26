#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
<<<<<<< HEAD
    int M = (n * (n * n + 1)) / 2;

    int i, j;
    int diag = 0;
    int offDiag = 0;
    int *rows, *cols;
    rows = (int *) malloc(sizeof(int) * n);
    cols = (int *) malloc(sizeof(int) * n);
    for (i = 0; i < n; i++) {
        rows[i] = 0;
        cols[i] = 0;
    }

    // Checking that every row and column add up to M, as well as the diagonals
    for (i = 0; i < n; i++) {
        diag += square[i][i];
        offDiag += square[i][n - i - 1];
=======
    int M = (n * (n*n + 1))/2;

    int i, j;
    int diag = 0, offDiag = 0;
    int *rows, *cols;
    rows = (int *) malloc(sizeof(int) * n);
    cols = (int *) malloc(sizeof(int) * n);

    // Adding up everything in the same loop
    for (i = 0; i < n; i++) {
        diag += square[i][i];
        offDiag += square[i][n - 1 - i];
>>>>>>> practical09
        
        for (j = 0; j < n; j++) {
            rows[i] += square[i][j];
            cols[j] += square[i][j];
        }
    }

<<<<<<< HEAD

    // The various rejection steps
    if (diag != M || offDiag != M) {
        return 0;
    }
=======
    // The various failing cases
    if (diag != M || offDiag != M) {
        return 0;
    }

>>>>>>> practical09
    for (i = 0; i < n; i++) {
        if (rows[i] != M || cols[i] != M) {
            return 0;
        }
    }

    // Else positive
    return 1;
}

