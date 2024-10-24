#include<stdio.h>
#include<stdlib.h>
int main() 
{
	float a,b,c,d;
	int i;
	for (i = 0; i < 999; i++)
	{
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &a);
		if (a ==-1)
			break;
		printf("Enter interest rate:");
		scanf_s("%f", &b);
		printf("Enter interest rate:");
		scanf_s("%f", &c);
		d = a * b * c / 365;
		printf("The interest charge is:%.2f\n", d);

	}
}