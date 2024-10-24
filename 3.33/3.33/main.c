#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l, b;
    printf("Enter length:");
    scanf_s("%d", &l);
    printf("Enter breadth:");
    scanf_s("%d", &b);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if ((i == 0) || (i == l-1) || (j == 0) || (j == b-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
         printf("\n");

    }
}