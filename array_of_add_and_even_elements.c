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
    for (i=0; i<a; i++)
    {
        if (arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
    for (i=0; i<a; i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
