#include<stdio.h>
int main()
{
    char *s;
    scanf("%s",s);
    char a,a1;
    int c=0,c1=0;

    int i,j;
    for(i=0; s[i]!='\0'; i++)
    {
        a =s[i];
        for(j=0; s[j]!='\0'; j++)
        {
            if(s[i]==s[j])
            c++;
        }
        if(c>c1)
        {
            c1=c;
            a1=s[i];
        } 
        c=0;   


    }
    printf("%c",a1);

}