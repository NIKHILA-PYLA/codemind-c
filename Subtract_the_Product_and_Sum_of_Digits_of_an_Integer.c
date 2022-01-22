#include<stdio.h>
int main()
{
    int i=1,n,d,sum=0,pro=1;
    scanf("%d",&n);
    while(i<=n)
    {
        d=n%10;
        pro=pro*d;
        sum=sum+d;
        n=n/10;
    }
    if(sum>=pro)
    {
        printf("%d",sum-pro);
    }
    else
    {
        printf("%d",pro-sum);
    }
    return 0;
}