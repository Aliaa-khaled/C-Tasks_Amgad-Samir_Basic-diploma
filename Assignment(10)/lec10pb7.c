#include <stdio.h>

void reverse_string(char *str);
int get_length(char *str);

int main() {

    char Str[100];

    printf("enter the string: ");
    scanf("%s", Str);

    reverse_string(Str);
	printf("%s",Str);

}

void reverse_string(char *str) {
	int length=get_length(str);
    for(int i = 0; i <  length/ 2; i++) {
        int temp = str[i];
		str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
}
int get_length(char *str)
{
    int i;
	for(i=0; str[i] !='\0';i++);
	return i;
}
