#include<stdio.h>
int pal(int num)
{
    int rev=0,rem,temp=num;
    while (temp>0)
    {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp/=10;
    }
    if (rev==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for (i=0; i<a; i++)
    {
        if (pal(arr[i])==1)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
