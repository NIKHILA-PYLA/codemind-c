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
    int sum=0;
    for (i=0; i<a; i++)
    {
        if (arr[i]%2!=0)
        {
            break;
        }
        else
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}
