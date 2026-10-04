#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
	float a, b, pi, actual, ans;
	int n, i;

//	Defining constants
	pi = 3.141592;

	n = 12;
	a = 0.0;
	b = pi / 3.0;

	actual = logf(2);

//	Adding the initial and ending values
	ans = tan(0.0) + tan(pi / 3.0);

//	The loop is done as described by the formula
	for (i=1;i<n;i++) {
		ans += 2.0 * tan(i * (b - a) / n);
	}

//	Multiplying it by the bar width
	ans *= (b - a) / (2.0 * n);

	printf("My answer: %5f\n", ans);
	printf("Actual answer: %5f\n", actual);
	printf("Difference: %5f\n", fabs(ans - actual));

	return 0;
}
