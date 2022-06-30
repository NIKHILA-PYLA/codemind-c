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
    int x,y;
    scanf("%d%d",&x,&y);
    int sum=0;
    for (i=0; i<a; i++)
    {
        if (arr[i]<x || arr[i]>y)
        {
            sum+=1;
            printf("%d ",arr[i]);
        }
    }
    if (sum==0)
    {
        printf("-1");
    }
    return 0;
}
