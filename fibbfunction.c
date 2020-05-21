#include <stdio.h>

int factorial(int n);
int main()
{
  int fact;
  printf("Enter a number");
  scanf("%d",&fact);
  printf("%d",factorial(fact));
  return 0;
}

int factorial(int n)
{
  int f=1;
  if(n>1)
  {
    return n*factorial(n-1);
  }
  else
  return n;
}
