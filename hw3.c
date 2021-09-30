#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int num, cnt=0;

	printf("Please enter a number: ");

	scanf("%d",&num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			cnt = cnt + 1;
		}
		if (cnt == 3) {
			break;
		}
	}
	if (cnt == 2) {
		printf("It is a prime number.\n");
	}
	else {
		printf("It is not a prime number.\n");
	}




	return 0;
}