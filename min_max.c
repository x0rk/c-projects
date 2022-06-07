#include <stdio.h>

int main()
{
	int n, min, max;
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	int a[n];
	
	for (int i=0; i<n; i++)
	{
		printf("Enter the %d th element of the array: ", i+1);
		scanf("%d", &a[i]);
	}
	
	for (int i=0; i<n; i++)
	{
		if (i == 0)
			max = min = a[i];
		if (a[i] < min)
			min = a[i];
		else if (a[i] > max)
			max = a[i];
	}
	printf("\nMinimum element: %d\n", min);
	printf("Maximum element: %d", max);
}