#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int i,c=0;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]=='a' || str[i]=='A')
            c++;
        else if (str[i]=='e' || str[i]=='E')
            c++;
        else if (str[i]=='i' || str[i]=='I')
            c++;
        else if (str[i]=='o' || str[i]=='O')
            c++;
        else if (str[i]=='u' || str[i]=='U')
            c++;
    }
    printf("%d",c);
    return 0;
}

