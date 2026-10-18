#include <stdio.h>
#include <math.h>

double power(double x, int n);
double macFunc(double x, double delta);
double logFunc(double x);

int main(void) {
	double delta;
	printf("Input a tolerance: ");
	scanf("%lf", &delta);

	double maclaurin[181], logarithm[181];
	int i;

	printf("x      | Maclaurin series    | Logarithm         | Difference\n");
	for (i = 0; i < 1.8 * 100 + 1; i++) {
		maclaurin[i] = macFunc(-0.9 + 0.01 * i, delta);
		logarithm[i] = logFunc(-0.9 + 0.01 * i);
		printf("%+4.2lf  | %+12.10lf       | %+12.10lf     | %+12.10lf\n", -0.9 + 0.01 * i, maclaurin[i], logarithm[i], maclaurin[i] - logarithm[i]);
	}
	return 0;
}

double power(double x, int n) {
	double ans = 1.0;
	int i;

	for (i = 0; i < n; i++) {
		ans *= x;
	}

	return ans;
}

double macFunc(double x, double delta) {
	double newAns = 0.0;
	double oldAns = -10.0;
	int n = 0;

	while (fabs(newAns - oldAns) > delta) {
		oldAns = newAns;
		newAns += power(x, 2 * n + 1) / (2.0 * n + 1.0);
		n++;
	}

	return newAns;
}

double logFunc(double x) {
	return 0.5 * (logf(1.0 + x) - logf(1.0 - x));
}
