#include<stdio.h>
#include <stdlib.h>

int fib(int arr[],int num);
int main()
{
	int num;
	do
	{
	printf("Enter the term number: ");
	scanf("%d",&num);
	}
	while (num <= 0) ;
	int *array = (int *)malloc(num * sizeof(int));
	if (array == NULL)
	{
        printf("Memory allocation failed.\n");
    }
	array[0]=1;
	array[1]=1;

	printf("The %dth Fibonacci number is: %d\n", num,fib( array,num ));
	free(array);
}
int fib( int arr[],int num)
{

	for(int i=2;i<10;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	return  arr[num-1];
}
/*another way 

#include <stdio.h>
#include <stdlib.h>

int fib(int num);

int main() {
    int num;
    do {
        printf("Enter the term number: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("The %dth Fibonacci number is: %d\n", num, fib(num));

    return 0;
}

int fib(int num) {
    int a = 1, b = 1;
    if (num == 1 || num == 2) {
        return 1;
    }
    for (int i = 3; i <= num; i++) {
        b += a ;
        a = b-a;
    }
    return b;
}
*/