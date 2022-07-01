#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int c=strlen(str);
    printf("%d",c);
    return 0;
}