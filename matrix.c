#include <stdio.h>

int main()
{
	int m, n;
	FILE 
	fscanf("%d %d", &m, &n);

	int a[m][n], b[n][m];	

	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
			{
				printf("Enter the %d%d element of the array: ", i+1,j+1);
				scanf("%d", &a[i][j]);
			}
	}
	
	printf("\nTranspose of the Matrix:\n");
	for (int k=0; k<n; k++)
	{
		for (int l=0; l<m; l++)
		{
			b[k][l] = a[l][k];
			printf("%d ", b[k][l]);
		}
		printf("\n");
	}
}