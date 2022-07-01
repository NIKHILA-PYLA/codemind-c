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
    int k,sum=0;
    scanf("%d",&k);
    for (i=0; i<k; i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}