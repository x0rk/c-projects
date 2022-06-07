#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    f1 = fopen("input.txt", "r");
    f2 = fopen("output.txt", "w");
    int m;

    fscanf(f1, "%d", &m);

    int a[m];
    for(int i = 1;  i<=m; i++)
    {
        fscanf(f1, "%d ", &a[i]);
    }

    for(int i =m; i>=1; i--)
    {
        fprintf(f2, "%d ", a[i]);
    }

    int k,g, bitch[k][g];

    fscanf(f1,"%d %d", &k, &g);

    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=g; j++)
        {
            fscanf(f1, "%d ", &bitch[i][j]);
        }
    }

     for(int i=k; i>=0; i--)
    {
        for(int j=g; j>=0;j--)
        {
            fprintf(f2, "%d ", bitch[j][i]);
        }
        fprintf(f2, "\n");
    }
    
    fclose(f1);
    fclose(f2);
}