#include <stdio.h>

void fibonacci(int n)
{
    static int i = 0, j = 1, k;
    if (n>0) 
     {
        k = i + j;
        i = j;
        j = k;
        printf("%d ", k);
        fibonacci(n-1);
    }
    else 
    return;
}

int main()
{
    printf("0 1 ");
    fibonacci(8);
}