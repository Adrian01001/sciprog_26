#include <stdio.h>
#include "matmult.h"

void printMatrix(char name, int n, int m, double M[n][m]);
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main(void) {
	int n = 5;
	int p = 3;
	int q = 4;
	double A[n][p];
	double B[p][q];
	double C[n][q];
	int i, j;

	// Initialising A, B, C
	for (i = 0; i < n; i++) {
		for (j = 0; j < q; j++) {
			C[i][j] = 0.0;
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < p; j++) {
			A[i][j] = (double) i + j;
		}
	}

	for (i = 0; i < p; i++) {
		for (j = 0; j < q; j++) {
			B[i][j] = (double) i - j;
		}
	}

	// Actually calculating C
    matmult(n, p, q, A, B, C);

	printMatrix('A', n, p, A);
	printMatrix('B', p, q, B);
	printMatrix('C', n, q, C);

	return 0;
}

void printMatrix(char name, int n, int m, double M[n][m]) {
	int i, j;

	printf("%c:      ", name);
	for (i = 0; i < n; i++) {
		if (i != 0) {
			printf("\t[");
		} else {
			printf("[");
		}

		for (j = 0; j < m; j++) {
			printf("%-5.1f ", M[i][j]);
		}
		printf("\b\b]\n");
	}
	printf("\n");
}
