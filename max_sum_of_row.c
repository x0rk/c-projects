#include <stdio.h>

int main()
{
	int m, n, x=0, y=0, z=0;
	printf("Enter the number of rows and columns in order separated by space: ");
	scanf("%d %d", &m, &n);
	int a[m][n], b[m], max;	

	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
			{
				printf("Enter the %d%d element of the array: ", i+1,j+1);
				scanf("%d", &a[i][j]);
			}
	}
	
	for (int k=0; k<m; k++)
	{	
		b[k] = 0;
		for (int l=0; l<n; l++)
		{
			b[k]+=a[k][l];
			
		}
	}
	
	for (int u=0; u<m; u++)
	{
		if (u == 0)
			max=b[u];
		if (b[u] > max)
			max = u;
	}

	printf("\nThe index of the row having greatest sum is %d\n\n", max);

	for (int v=0;v<m;v++)
	{
		printf("The %dth index row sum is %d\n", v, b[v]);
	}
	
}