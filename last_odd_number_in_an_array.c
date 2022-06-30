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
    int odd=arr[0];
    for (i=0; i<a; i++)
    {
        if (arr[i]%2!=0)
        {
            odd=arr[i];
        }
    }
    printf("%d",odd);
    return 0;
}
