#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	float fnum;
	float res;
	printf("Please enter kilometers: ");
	scanf("%f", &fnum);
	res = fnum / 1.609;
	printf("%.1f km is equal to %.1f miles\n", fnum, res);

	return 0;
}
