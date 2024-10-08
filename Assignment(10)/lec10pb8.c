#include <stdio.h>
void concatenate(char str1[], const char str2[]);
int get_length(char *str);

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "world!";

    concatenate(str1, str2);

    printf("Concatenated string: %s\n", str1);
}

void concatenate(char str1[], const char str2[]) {
    int i =  get_length(str1);
    int j = 0;

    for(i; str2[j] !='\0';i++,j++)
	{
        str1[i] = str2[j];
    }
    str1[i] = '\0';
}
int get_length(char *str)
{
    int i;
	for(i=0; str[i] !='\0';i++);
	return i;
}
