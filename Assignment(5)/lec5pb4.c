#include<stdio.h>
/*(4) You are designing a poster which prints out numbers with a unique style applied to each of them.
	The styling is based on the number of closed paths or holes present in a giver number.*/
int number_holes(int number);
int main()
{
	int num;
    printf("enter any number: ");
	scanf("%d",&num);
	int result=number_holes(num);
	printf("the total number of holes in %d : %d",num,result);
}
int number_holes(int number)
{
	int hole=0;
	for(int i=0;i<3;i++)
	{
		switch(number%10)
		{
			case 0:  hole+=1;
			break;
			case 4:  hole+=1;
			break;
			case 6:  hole+=1;
			break;
			case 9:  hole+=1;
			break;
			case 8:  hole+=3;
			break;
		}
		number/=10;
	}
	return hole;
}
