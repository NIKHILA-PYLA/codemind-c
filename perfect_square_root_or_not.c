#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,flag=0;
    for (i=0;i<a;i++)
    {
        if (i*i==a)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}    