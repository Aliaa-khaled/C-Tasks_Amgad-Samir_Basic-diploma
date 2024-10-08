#include <stdio.h>
char* new_string(char *str1);
int length(char *Str);
int main()
{
    char *str = "cat";
    printf("%s",new_string(str));
}
char* new_string(char *str1)
{
	static char str2[4];
	int length1=length(str1);
	if (length1 < 2) {
        return NULL;
    }
    *str2= str1[length1 - 1];
    *(str2+1) = ' ';
    *(str2+2) = str1[length1 - 2];
    *(str2+3) = '\0';
    return str2;
}
int length(char *Str)
{
    int i=0;
    while(Str[i]!='\0')
        i++;
    return i;
}
