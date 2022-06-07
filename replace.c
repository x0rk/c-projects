#include <stdio.h>

int main()
{
	int n, x, y; 
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	int a[n];
	
	for (int i=0; i<n; i++)
	{
		printf("Enter the %d th element of the array: ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("\nEnter the element you wanna replace: ");
	scanf("%d", &x);
	printf("Enter the element you wanna replace with the previous one: ");
	scanf("%d",&y);
	
	printf("\nThe modified array is ");
	for(int j=0; j<n; j++)
	{
		if (a[j] == x)
			a[j] = y;
		if (j == n-1)
			printf("%d",a[j]);
		else
			printf("%d, ",a[j]);
	}
	return 0;
}