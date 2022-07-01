#include<stdio.h>
int rev(int num)
{
    int re=0,rem;
    while (num>0)
    {
        rem=num%10;
        re=(re*10)+rem;
        num/=10;
    }
    return re;
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
        printf("%d ",rev(arr[i]));
    }
    return 0;
}
