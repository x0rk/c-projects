#include <stdio.h>

char a[10];
int f = 0, r = -1;

void pop()
{
    if(!isEmpty())
    {
        printf("Popped %c\n", a[f]);
        int i = 0;
        while(a[i] = a[i+1])
        {i++;}
        r--;
    }
    else
        printf("\nStack is Empty.");

}

void push(char c)
{
    if(!isFull())
    {
        a[++r] = c;
        printf("Pushed %c\n", c);
    }
    else{
        printf("\nStack is Full.\n");
    }
}

int isEmpty()
{
    return f == r+1;
}

int isFull()
{
    return f == sizeof(a)-1;
}

int main()
{
    char k = 'a';

    for(int j = 0; j<10; j++)
        push(k+j);
    printf("\n\n");
    for(int l = 0; l<12; l++)
        pop();
    

    printf("\n\nf = %d\nr = %d", f, r);
    printf("\nThe array has %d element(s)\n", r+1-f);
    for(int i = 0; i<10; i++)
        printf("%c, ", a[i]);
    printf("\n\n");
}