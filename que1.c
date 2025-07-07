#include <stdio.h>

void main()
{
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter any string: ");
    gets(str); 

    ptr = str;  

    while (*ptr != '0')
    {
        length++;
        ptr++;
    }

    printf("The length of a string is: %d", length);
}
