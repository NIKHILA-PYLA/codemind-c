#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0,se;
    scanf("%d",&se);
    for (i=0; i<a; i++)
    {
        if (arr[i]==se)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
