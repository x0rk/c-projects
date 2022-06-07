#include <stdio.h>

int i0 , i1, c = 0;

void min(int a[], int n)
{
    do{
    int *p = a;

    if(c == 0)
        i0 = *p;
    c++;
    if (*(p+1) < *(p+2))
    {
        i0 += *(p+1);
        min(p+1, n-1);
    }
    else{
        if(*(p+1) == *(p+2))
        {
            i0 += *(p+2);
            min(p+2, n-2);
        }
        else{
        i0 += *(p+2);
        min(p+2, n-2);
        }
        }}while(c < n);

}

void main()
{
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);
    int s[n];

    printf("Enter the cost of each step:\n");
    for(int i = 0; i < n; i++)
    {
        printf("Enter the cost of step %d: ", i+1);
        scanf("%d", &s[i]);
    }
    int *j = s;
    printf("%d", sizeof(s));
    min(s, n);
    printf("\n%d\n", i0);
}