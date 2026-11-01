#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double factorial(int n);

int main(void) {
	double *a, answer;
	int n, i;
	
	printf("Size | Estimate\n");
	for (n = 1; n < 16; n++) {
		answer = 0.0;
		a = (double *) malloc(n * sizeof(double));
		for (i = 0; i < n; i++) {
			a[i] = 1.0 / factorial(i);
			answer += a[i];
		}
		printf("%4d | %-15.11f\n", n, answer);
		free(a);
	}
		
	return 0;
}


double factorial(int n) {
	if (n < 0) {
		return 0.0;
	} else if (n == 0 || n == 1) {
		return 1.0;
	}
	return n * factorial(n - 1);
}
