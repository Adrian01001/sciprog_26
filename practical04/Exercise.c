#include <stdio.h>
#include <math.h>

float pi, tanVals[13];
float degToRad(int arg);
float areaUnderCurve(float (*f)(float), float start, float end, int nBins);
float myTan(float arg);

int main(void) {
	int i;
	pi = atanf(1.0) * 4.0;

	// Constructing the array
	for (i = 0; i < 13; i++) {
		tanVals[i] = tanf(degToRad(5 * i));
	}

	printf("Degree\ttan(x)\n");
	// Printing the array
	for (i = 0; i < 13; i++) {
		printf("%d\t%.5f\n", 5 * i, tanVals[i]);
	}

	// Computing and printing the area under the curve
	printf("\nArea under curve: %.5f\n", areaUnderCurve(myTan, 0.0, degToRad(60), 12));

	return(0);
}

float degToRad(int arg) {
	return(pi * arg / 180.0);
}

float myTan(float arg) {
	return (float) tan(arg);
}

float areaUnderCurve(float (*f)(float), float start, float end, int nBins) {
	float width = (end - start) / nBins;
	float ans = f(start) + f(end);
	int i;

	for (i = 1; i < nBins; i++) {
		ans += 2.0 * f(start + i * width);
	}
	return(width * ans / 2.0);
}
