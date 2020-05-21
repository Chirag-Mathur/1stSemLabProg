#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    //printf("%s",s);
    int i;
    for(i=0; s[i]!='\0'; i++)
    {
        if((int)s[i]<91)
        s[i]=s[i]+32;
        else
        {
            s[i]=s[i]-32;
        }
        //printf("Hello",s);
    }
    printf("%s",s);
} 