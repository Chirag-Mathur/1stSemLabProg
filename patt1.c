#include <stdio.h>
int main()
{
  int i,j;
  for(i=0; i<5; i++)
  {
    for(j=1; j<=(5-i); j++)
    printf("*");
     for(j=1; j<=(2*i); j++)
     printf(" ");
     for(j=5; j>i; j--)
     printf("*");

     printf("\n");
  }
}
