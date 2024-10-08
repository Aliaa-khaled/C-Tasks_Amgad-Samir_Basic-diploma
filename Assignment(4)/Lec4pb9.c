#include<stdio.h>
/*(9) Write a program to display cross or X-shape using stars pattern.*/

int main()
{
	int num;
    printf("enter the number of rows: ");
	scanf("%d",&num);
     for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if ((j == i) || (j == num - (i+1)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}
