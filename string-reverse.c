#include <stdio.h>

int main()
{
    char str[5]="hello";
    char rev[5] = "";

    char *r, *s;
    r = rev;
    s = &str[sizeof(str)-1];
    
    while(*r++ = *s--)
    {}
    for(int i = 0 ; i < sizeof(rev); i++)
    printf("%c", rev[i]);

}