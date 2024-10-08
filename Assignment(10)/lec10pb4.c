#include <stdio.h>
int convert_upper_case(char *str);
int main()
{
    char Str[100];

    printf("enter the string: ");
    scanf("%s", Str);

    convert_upper_case(Str);
	printf("%s",Str);

}
int convert_upper_case(char *str)
{
	for(int i=0; str[i] !='\0';i++)
	{
		if((str[i]>='A') && (str[i]<='Z'))
		{
			str[i] +=32;
		}
	}
}
