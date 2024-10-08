#include <stdio.h>
int get_length(char *str);
int main()
{
    char Str[100];

    printf("enter the string: ");
    scanf("%s", Str);

    printf("Length of the string: %d",get_length(Str));

}
int get_length(char *str)
{
    int i;
	for(i=0; str[i] !='\0';i++);
	return i;
}
