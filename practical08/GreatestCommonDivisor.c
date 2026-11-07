#include <stdio.h>
#include <assert.h> // I added this library so I can check if the arguments are good. (I'm aware we havne't done this in class)

int GCDiterative(int a, int b);
int GCDrecursive(int a, int b);

int main(void) {
//	Added this so the user can test any numbers they like
	int a, b;
	printf("Input two positive integers\na = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	
	printf("\nThe greatest common divisor of %d and %d is:\n", a, b);
	printf("Iterative: %d\n", GCDiterative(a, b));
	printf("Recursive: %d\n", GCDrecursive(a, b));
	return 0;
}

int GCDiterative(int a, int b) {
//	I'm not sure what to do if a or b are negative, so I exclude that case
	assert(a >= 0 && b >= 0);
	int temp;
	
//	Following the pseudo-code
	while (b > 0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	
	return a;
}

int GCDrecursive(int a, int b) {
	assert(a >= 0 && b >= 0);
	
//	Following the pseudo-code again
	if (b == 0) {
		return a;
	} else {
		return GCDrecursive(b, a % b);
	}
}
