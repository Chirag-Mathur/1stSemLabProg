#include<stdio.h>
int sum(int a);
int s;
int main(){
int n;
scanf("%d",&n);
printf("%d",sum(n));
}
int sum(int a)
{
  if(a==0)
  return s;
  else
  {
    s=s+a;
    sum(--a);
  }

}
