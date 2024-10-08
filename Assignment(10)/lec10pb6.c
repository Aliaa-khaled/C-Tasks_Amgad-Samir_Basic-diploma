#include <stdio.h>
int remove_characters(char *str);
int main()
{
    char Str[100];

    printf("enter the string: ");
    scanf("%s", Str);

    remove_characters(Str);
	printf("%s",Str);

}
int remove_characters(char *str)
{
    int j=0;
	for(int i=0; str[i] !='\0';i++)
	{
	    if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[j]=str[i];
            j++;
        }

	}
    str[j] = '\0';
}
