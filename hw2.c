#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	float dnum;
	float res;
	printf("Please enter kilometers: ");
	scanf("%f", &dnum);
	res = dnum / 1.609;
	printf("%.1f km is equal to %.1f miles\n", dnum, res);

	return 0;
}