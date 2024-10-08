#include <stdio.h>
int length(char *Str);
int main()
{
    char *str = "aliaa khaled";
    printf("the length of a given string is %d",length(str));
}
int length(char *Str)
{
    int i=0;
    while(Str[i]!='\0')
    {
        i++;
    }
    return i;
}
