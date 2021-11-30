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
		printf("Name> "); scanf("%[^\n]s", inf[i].city);//공백 포함 문자 입력받기
		scanf("%*c"); //개행 문자 없애기, getchar()도 가능하다
		printf("Country> "); scanf("%[^\n]s", inf[i].country);
		scanf("%*c");
		printf("Population > "); scanf("%d", &inf[i].population);
		scanf("%*c");
	}

	showinfo(inf);

	return 0;
}