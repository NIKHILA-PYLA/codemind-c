#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    for (int z=0;z<k;z++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d
",a+b);
    }
    return 0;
}