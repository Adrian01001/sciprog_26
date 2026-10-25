#include <stdio.h>

void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]) {
    int i, j, k;
    double answer;
    for (i = 0; i < n; i++) {
		for (j = 0; j < q; j++) {
			answer = 0.0;
			for (k = 0; k < p; k++) {
				answer += A[i][k] * B[k][j];
			}
			C[i][j] = answer;
		}
	}
}
