#include<stdio.h>
int size(int num)
{
    int c=0;
    if (num==0)
    {
        return 1;
    }
    if (num<0)
    {
        num*=-1;
    }
    while (num>0)
    {
        c++;
        num/=10;
    }
    return c;
}
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
        int s=size(arr[i]);
        printf("%d ",s);
    }
    return 0;
}

