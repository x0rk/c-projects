#include<stdio.h>

int main()
{
    
    int d = 10;
    //int *s = &d;
    int *s;
    s = &d;
    printf("%x %d", s,*s);

}