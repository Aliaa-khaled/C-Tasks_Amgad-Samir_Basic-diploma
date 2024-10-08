#include <stdio.h>
int check(const char *str);
int main()
{
    char Str[100];

    printf("enter the string: ");
    scanf("%s", Str);
	printf("%d",check(Str));

}
int check(const char *str)
{
	for(int i=0; str[i] !='\0';i++)
	{
		for(int j=i+1; str[j] !='\0';j++)
		{
			if(str[i] == str[j])
				return 0;
		}
	}
	return 1;
}
