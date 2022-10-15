#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a;
	int b;
	a = '*';
	for (b = 0;b < 4;b++)
	{
		printf(" % c", 'a');
	}
	printf("\n");
	printf("%c\n", 'a');
	printf("%c\n", 'a');
	for (b = 0;b < 4;b++)
	{
		printf(" % c", 'a');
	}
}    