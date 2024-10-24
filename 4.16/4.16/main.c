#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int i, j;
	printf(" a");
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	printf("\n");
	printf("b ");
	printf("\n");
	for (i = 10; i >=1; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	printf("\n");
	printf(" c");
	printf("\n");
	for (i = 10; i >= 1; i--)
	{
		for (j = 10; j > i; j--)
		{
			printf(" ");
		}

		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	printf("\n");
	printf(" d");
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j > i; j--)
		{
			printf(" ");
		}

		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");

	}


}