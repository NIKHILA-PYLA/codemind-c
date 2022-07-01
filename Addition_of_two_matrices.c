#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int mat1[a][a],mat2[a][a],i,j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    int sum[a][a];
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            printf("%d",sum[i][j]);
            if (j<a-1)
            {
                printf(" ");
            }
        }
        printf("
");
    }
    return 0;
}
