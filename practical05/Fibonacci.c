#include <stdio.h>
#include <math.h>

void fib(int *a, int *b);

int main(void) {
	int n;
	printf("Input an integer: ");
	scanf("%d", &n);

	if (n < 1) {
		printf("Number cannot be negative\n");
		return 1;
	} else {
		printf("The first %d Fibonacci numbers are:\n", n);
		int a = 0;
		int b = 1;
		int i;
		printf("%d\n", a);
		for (i = 1; i < n; i++) {
			fib(&a, &b);
			printf("%d\n", a);
		}
	}
	return 0;
}

void fib(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = *a + temp;
}
