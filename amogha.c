#include <stdio.h>

int s;

int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    //s=s+ n%10;
    return (n%10 + sum(n/10));
}


int main()
{
int n;
printf("go fuck yourself\n");
printf("enter a number first tho: \n");
scanf("%d", &n);
int a = sum(n);
printf("%d", a);
}