#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int fa=0,fb=1,temp,i;
    for (i=0;i<a;i++)
  {
      printf("%d ",fa);
      temp=fa+fb;
      fa=fb;
      fb=temp;
  }
  return 0;
}
    