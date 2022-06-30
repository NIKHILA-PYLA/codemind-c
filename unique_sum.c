#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j] && arr[i]!=-1)
                {
                    arr[j]=-1;
                }
            }
        }
    }
    for (i=0; i<a; i++)
    {
        if (arr[i]!=-1)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}
