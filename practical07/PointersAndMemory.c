#include <stdio.h>
#include <stdlib.h>

int *allocateArray(int n);
void fillWithOnes(int *a, int n);
void printArray(int *a, int n);
void freeArray(int *a);

int main(void) {
	int n;
	printf("Input an integer: ");
	scanf("%d", &n);
	
	int *a = allocateArray(n);
//	printArray(a, n);
	fillWithOnes(a, n);
	printArray(a, n);
	freeArray(a);

	return 0;
}

int *allocateArray(int n) {
	int *a = (int *) malloc(n * sizeof(int));
	return a;
}

void fillWithOnes(int *a, int n) {
	int i;
	
	for (i = 0; i < n; i++) {
		a[i] = 1;
	}
}

void printArray(int *a, int n) {
	int i;
	
	for (i = 0; i < n; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}

void freeArray(int *a) {
	free(a);
}
