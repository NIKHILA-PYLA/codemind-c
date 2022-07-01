#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for (i=1; i<=a; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d",j);
            if (j==a)
            {
                break;
            }
        }
        if (i==a)
        {
            break;
        }
        else
        {
            printf("
");
        }
    }
    return 0;
}