#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int cap=2*a*b*c*512;
    printf("%dKB",cap/1024);
    return 0;
}