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
    int sum=0,c=0,avg;
    for (i=0; i<a; i++)
    {
        sum+=arr[i];
    }
    avg=sum/a;
    for (i=0; i<a; i++)
    {
        if (arr[i]>=avg)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}

