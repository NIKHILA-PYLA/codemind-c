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
    int even=arr[0];
    for (i=0; i<a; i++)
    {
        if (arr[i]%2==0)
        {
            even=arr[i];
        }
    }
    printf("%d",even);
    return 0;
}