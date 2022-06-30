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
    int min=arr[0];
    for (i=0; i<a; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}
