#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int max=a%10;
    while (a>0)
    {
      int r=a%10;
      if (max<r)
      {
        max=r;
      }
      a=a/10;
    }
printf("%d",max);
return 0;
}