#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[500];
    printf("input string to convert to upper case\n");
    gets(string);
    printf("charecters lower case: \"%s\"\n", strupr(string));
    return 0;
}
