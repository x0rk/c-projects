#include <stdio.h>

int a = 0, b = 1, c, i = 1;

void fibo( int );

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("The first %d terms of fibonacci series are\n0 1 ", x);
    fibo(x-2);
}

void fibo(int n)
{
    if(n>0)
    {c = a + b;
    a = b;
    b = c;
    printf("%d ", c);
    fibo(n-1);
    }
}
