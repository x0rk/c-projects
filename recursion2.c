#include <stdio.h>

int fact(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d",n , fact(n));
}

int fact(int x)
{
    if(x == 1 || x == 0)
        return 1;
    else
        return (x * fact(x-1));
}