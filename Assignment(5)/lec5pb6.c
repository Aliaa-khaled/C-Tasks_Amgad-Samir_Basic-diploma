#include <stdio.h>

int number_ones(int number);

int main()
{
    int num,j=0;

    printf("Enter any number: ");
    scanf("%d", &num);
    int result=number_ones(num);
    printf("number of ones is %d\n",result);
}
int number_ones(int number)
{
    int j=0;
    for(int i=0;i<32;i++)
    {
        if(number&1==1)
        {
            j++;
        }
        number=number >> 1;
    }
    return j;
}