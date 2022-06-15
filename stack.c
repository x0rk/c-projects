#include <stdio.h>

char a[10];
int f=0, r=-1;

void pop()
{
    if(!(f == r+1))
    {

        printf("%c", a[r]);
        a[r--] = NULL;
    }
    else
        printf("\nStack is empty.");
}

void push()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", c);
    if(!(r == sizeof(a)-1))
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
    int n;

    printf("Enter the size of the stack array: ");
    scanf("%d", &n);

    for(int j = 0; j<n; j++)
        push();

    pop();
    
    printf("\nf = %d\nr = %d", f, r);
    printf("\nThe array has %d element(s)\n", r+1-f);

    for(int i = 0; i<10; i++)
        printf("%c, ", a[i]);
    printf("\n\n");
}
