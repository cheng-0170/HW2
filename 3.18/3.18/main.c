#include<stdio.h>
#include<stdlib.h>
int main()
{   
	int i;
	while (i = 0; i < 999;i++)
	{
		float a, b;
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		b = a * 0.09 + 200;
		printf_s("salary is:%f\n", b);
	}


}