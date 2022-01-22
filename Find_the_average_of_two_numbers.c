#include<stdio.h>
int main()
{
    int a,b,sum;
    float avg;
    scanf("%d%d",&a,&b);
    sum = a+b;
    avg =(float)(a+b)/2;
    printf("%.4f",avg);
    return 0;
}