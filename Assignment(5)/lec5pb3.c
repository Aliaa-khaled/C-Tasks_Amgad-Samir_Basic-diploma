#include<stdio.h>
/*(3) write a C Function that display Prime Numbers between Intervals (two numbers).*/
void Prime(int start,int end);
int main()
{
	int start,end;
    printf("enter start and end point: ");
	scanf("%d%d",&start,&end);
	Prime(start, end);
   
}
void Prime(int start,int end)
{
	int found=0;
	if (start > end) 
	{
        printf("Invalid range.\n");
        return;
    }
	for(int i=start;i<=end;i++)
	{
		if( (i<=1)) 
		{
			continue;
		}
		int prime=1;
		for(int j=2;j<=i/ 2;j++)
		{
			if(i%j ==0)
			{
				prime=0;
				break;
			}
		}
		if(prime==1) 
		{
			if (!found) 
			{
                printf("The prime numbers: ");
            }
			printf("%d  ",i);
			found = 1;
		}
	}
	if (!found)	
	{
        printf("No prime numbers in the given range.");
    }
}
