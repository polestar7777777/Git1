#include <stdio.h>

int main()
{
	int original[5];
	int i;

	printf("5개의 정수를 입력하세요: ");
	
	for (i = 0; i < 5; i++) {
		scanf("%d", &original[i]);
	}

	for (i = 0; i < 5; i++) {
		if (i == 0) {
			printf("홀수 출력: ");
		}
		if (original[i] % 2 != 0) {
			printf("%d ", original[i]);
		}
		if (i == 4) {
			printf("\n");
		}
	}
	
	for (i = 0; i < 5; i++) {
		if (i == 0) {
			printf("짝수 출력: ");
		}
		if (original[i] % 2 == 0) {
			printf("%d ", original[i]);
		}
		if (i == 4) {
			printf("\n");
		}
	}
	

	return 0;
}