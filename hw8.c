#include <stdio.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if(ch)
	if (ch >= 'A' && ch <= 'Z') {
		return ch + diff;
	}
	else if (ch >= 'a' && ch <= 'z') {
		return ch - diff;
	}
	else
		return -1;
}

int main(void)
{
	int ch;
	char str[100];
	int i, len;
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		ch = str[i];
		ch = convCase(ch);
		if (ch != -1) {
			str[i] = ch;
		}
	}
	printf("Output> %s \n", str);
	return 0;
}