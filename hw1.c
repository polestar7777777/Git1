#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int num1, num2;

	printf("ù��° ���� �Է�: ");
	scanf("%d", &num1);
	printf("�ι�° ���� �Է�: ");
	scanf("%d", &num2);

	printf("%d & %d = %d\n", num1, num2, num1 & num2);
	printf("%d | %d = %d\n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
	return 0;
}