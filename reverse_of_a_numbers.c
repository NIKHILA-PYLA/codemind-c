#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int rev=0,r;
    while (a>0)
    {
        r=a%10;
        rev=(rev*10)+r;
        a=a/10;
    }
    printf("%d",rev);
    return 0;
}