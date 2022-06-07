#include <stdio.h>

char a[10];
int f=0, r=-1;

void pop()
{
    if(!(isEmpty()))
    {

        printf("%c", a[r]);
        a[r--] = NULL;
    }
    else
        printf("\nStack is empty.");
}

void push(char c)
{
    if(!(isFull()))
        a[++r]=c;
    else
        printf("\nStack is Full.\n");
    
}

int isEmpty()
{
    return f == r+1;
}

int isFull()
{
    return r == sizeof(a)-1;
}

int main()
{
    char k = 'a';

    for(int j = 0; j<10; j++)
        push(k+j);
    
    pop();
    
    printf("\nf = %d\nr = %d", f, r);
    printf("\nThe array has %d element(s)\n", r+1-f);
    for(int i = 0; i<10; i++)
        printf("%c, ", a[i]);
    printf("\n\n");
}
