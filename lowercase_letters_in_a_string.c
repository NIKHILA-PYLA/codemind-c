#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int c=0,i;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]>=97 && str[i]<=122)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}

