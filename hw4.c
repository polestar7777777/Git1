#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void makebinarynumber(int n) {
	if (n / 2 > 0) {//ex) 3, 3/2=1>0, 3%2=1, 1
		makebinarynumber(n / 2);//1/2=0
		printf("%d", n % 2);
	}
	else {//1, result=11
		printf("%d", n);
	}

}


int main()
{
	int n, correct;
	 
	printf("Please enter a number: ");
	correct=scanf("%d", &n);
	if (correct&&n>0) {
		makebinarynumber(n);
		printf("\n");
	}
	else {
		printf("Wrong Input\n");
	}

	return 0;
}
