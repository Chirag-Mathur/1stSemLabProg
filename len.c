#include<stdio.h>
int check(char *s)
{
char *p=s;int i=0;
while(*s[i]!='\0')
{

p++;i++;
}p--;
while(*p==*s)
{
p--;s--;
if((p-s)==1 ||(p-s)==2)
{
return 0;
}
}
return 1;
}
int main()
{
char *s;
scanf("%s",s);
if(check(s)==1)
printf("palindrome");
else
printf("not palindrome");
return 0;
}
