#include<stdio.h>
int main()
{
  int a=0, b=1;
  printf("%d\n",a);
  int c,sum=0,fsum =0;
  while(sum<100)
  {
    c=a+b;

    a=b;
    b=c;
    sum=sum+c;
    if(sum<100)
    {
      printf("%d\n",c);
     fsum=sum;}
  }

printf("Sum is %d ",fsum);
}
