#include <stdio.h>
#include <math.h>

void StandardDeviation(double* arr) {
	double average = 0;
	double res = 0;
	double tmp;
	int i;
	for (i = 0; i < 5; i++) {
		average += arr[i];
	}
	average /= 5;
	for (i = 0; i < 5; i++) {
		tmp = arr[i] - average;
		tmp = pow(tmp, 2);
		res += tmp;
	}
	res /= 5;
	res = sqrt(res);

	printf("Standard Deviation = %.3lf\n", res);
}

int main() 
{
	double arr[5];
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%lf", &arr[i]);
	}
	StandardDeviation(arr);

	return 0;
}