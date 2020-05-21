#include<stdio.h>
void swap(int *p, int *q);
int main(){
int a,b, *l,*m;
scanf("%d",&a);
scanf("%d",&b);
l=&a;
m=&b;
swap(l,m);
printf("%d\n",a);
printf("%d\n",b);

}

void swap(int *p, int *q)
{
  *p=*p+*q;
  *q=*p-*q;
  *p=*p-*q;
}
