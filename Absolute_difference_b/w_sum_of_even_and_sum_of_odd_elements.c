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
    int se=0,so=0;
    for (i=0; i<a; i++)
    {
        if (arr[i]%2==0)
        {
            se+=arr[i];
        }
        else
        {
            so+=arr[i];
        }
    }
    int diff=se-so;
    if (diff<0)
    {
        diff*=-1;
    }
    printf("%d",diff);
    return 0;
}


