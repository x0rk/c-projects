#include <stdio.h>

int main()
{
    char *s, str[5]="hello";
    s = &str[sizeof(str)-1];
    for(int i = 0 ; i < sizeof(str); i++)
        printf("%c", *s--);
}