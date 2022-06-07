#include <stdio.h>

int a = 0, b = 1, c = 0, i = 1;

void fibo( int );

int main()
{
    int i = 10;
    printf("0\n1\n");
    fibo(i-1);
}

void fibo(int n)
{
    
    c = a + b;
    a = b;
    b = c;
    i++;
    printf("%d\n", c);
    if (i==n)
    {
        return;
    }
    fibo(n);
}
