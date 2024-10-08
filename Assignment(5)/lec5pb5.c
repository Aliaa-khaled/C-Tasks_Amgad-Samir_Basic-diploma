#include <stdio.h>
int Power_Two(int number);
int Power_Three(int number);
int main()
{
	int num;
	printf("Enter a number: ");
    scanf("%d", &num);
    if(num==1)
    {
        printf("1 is a power of both 2 and 3");
    }
	else if (Power_Two(num))
	{
        printf("%d is a power of 2.\n", num);
    }
	else if (Power_Three(num))
	{
        printf("%d is a power of 3.\n", num);
    }
	else
	{
        printf("%d is neither a power of 2 nor a power of 3.\n", num);
    }
}
int Power_Two(int number)
{
    if (number <= 0)
    {
        return 0;
    }
    return ((number & (number - 1)) == 0?1:0);
}

int Power_Three(int number)
{
    if (number <= 0)
    {
        return 0;
    }
    while (number % 3 == 0)
	{
        number /= 3;
    }
    return (number == 1?1:0);
}
