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
    int s1=0,s2=0,mid=a/2;
    for (i=0; i<mid; i++)
    {
        s1+=arr[i];
    }
    for (i=mid; i<a; i++)
    {
        s2+=arr[i];
    }
    int diff=s1-s2;
    if (diff<0)
    {
        diff*=-1;
    }
    printf("%d",diff);
    return 0;
}
