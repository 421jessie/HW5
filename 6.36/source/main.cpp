#include <stdio.h>
#include <string.h>

int stringreverse(char* str) 
{
    int i, j;
    char text;

    j = strlen(str) - 1;
    for (i = 0; i < j; i++) {
        text = str[i];
        str[i] = str[j];
        str[j] = text;
        j--;
    }
    return 0;
}

int main() 
{
    char String[] = "how are you";
    printf("%s\n", String);
    stringreverse(String);
    printf("%s\n", String);

    return 0;
}