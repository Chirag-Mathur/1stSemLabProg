#include<stdio.h>
#include<math.h>
void ap();

int main(){
  int t=1,c=0;
  do{
    
    printf("Press 1 to run the prg or Press 0 to exit\n");
    scanf("%d",&t);
    if(t==1)
    {ap();c++;}
    else
    {printf("Program run total %d times\n",c);
      break;}
    }while(t==1);
}

void ap()
{
  int n,k,sum=0,n1,ch;
  printf("Enter a Number");
  scanf("%d",&n);
  n1=n;
  printf("Press 1 to check prime 2 to check Amstrong\n ");
  scanf("%d",&ch);

switch(ch)
{
    int i;
  //Checking for prime
  case 1:
  
  for(i=2; i<n; i++)
  {
    if(n%i)
    {
      printf("Number is not prime\n");
      break;
    }

  }
  if(i==(n-1))
  {
    printf("Number is prime\n");
  }
  break;

//Checking for Amstrong Number
case 2:
k=(int)log10(n)+1;
for(i=0; i<k; i++)
{
  sum = sum + (int)pow((n%10),3);
  

  n=n/10;
}
  

if(sum==n1)
{
  printf("Number is Amstrong\n");
}
else
printf("It is not a Amstrong Number\n");
break;
}
}
