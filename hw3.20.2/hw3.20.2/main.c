#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	float a, b, c = 0, d = 0;
	for (i = 0; i < 999; i++)
	{
		printf("Enter # of hours work (-1 to end):");
		scanf_s("%f", &a);
		if (a == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &b);
		if (a >= 0 && a <= 40)
		{
			d = 0;
			d = a * b;
			printf("Salary is $ %.2f\n", d);
		}
		else
		{
			c = a - 40;
			d = 40 * b + c * b * 1.5;
			printf("Salary is $%.2f\n", d);
		}

	}

}