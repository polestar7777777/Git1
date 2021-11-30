#include <stdio.h>

typedef struct information
{
	char city[20];
	char country[20];
	int population;
}Info;

void showinfo(Info* inf)
{
	printf("Printing the three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %d people\n", i+1, 
			inf[i].city, inf[i].country, inf[i].population);
	}
}

int main()
{
	Info inf[3];
	printf("Input three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("Name> "); scanf("%[^\n]s", inf[i].city);//���� ���� ���� �Է¹ޱ�
		scanf("%*c"); //���� ���� ���ֱ�, getchar()�� �����ϴ�
		printf("Country> "); scanf("%[^\n]s", inf[i].country);
		scanf("%*c");
		printf("Population > "); scanf("%d", &inf[i].population);
		scanf("%*c");
	}

	showinfo(inf);

	return 0;
}