#include <stdio.h>
int main()
{
    char str[]="", rev[]="";
    char *r, *s;
    r = rev;
    printf("Enter a String: ");
    scanf("%s", str);
    s = &str[sizeof(str)-1];
    while(*r++ = *s--)
    {
        printf("%c", *r);
    }
    //for(int i = 0; i<sizeof(str);i++) {printf("%c", rev[i]);}
}