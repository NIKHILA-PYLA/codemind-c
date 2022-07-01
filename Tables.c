#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    int pro,i;
    for (i=1; i<=r; i++)
    {
        if (i%2!=0)
        {
            pro=n*i;
            printf("%d x %d = %d
",n,i,pro);
        }
    }
    return 0;
}