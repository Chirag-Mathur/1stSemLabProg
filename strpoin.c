#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int l1=0;
    int i;
    scanf("%s",s1);
    scanf("%s",s2);
    //printf("%s",s1);
    for(i=0; s1[i]!='\0'; i++)
    {
        l1++;
    }
    for(i=0; s2[i]!='\0'; i++)
    {
        s1[l1]=s2[i];
        l1++;

    }  
    s1[l1]='\0';
    printf("%s",s1);  
}