
#include<stdio.h>
#include<math.h>

long long int pw(long long int a)
{
    //printf("%d\n",a);
    long long int x=1;
    
        x=x<<a;
    
    return x%1000000007;
}
void square(int a, long long int n)
{
   long long int x;
   long long int x1;
    unsigned long long int area=1;
    if(n%2==0)
    {
        x= pw(n/2);
        area=((area*x))%1000000007;
       area=((area*a))%1000000007;
        area=(area*x)%1000000007;
        area=(area*a)%1000000007;
    }
    else 
    {
        
        x1=pw(n/2)%1000000007;
        
        
        area=(area*x1)%1000000007;
        
       area=(area*a)%1000000007;
        area=(area*x1)%1000000007;
       
        area=(area*a)%1000000007;
        
        area=(area*2)%1000000007;
        

    }
    printf("%llu\n",(area%1000000007));
    
}

int main(){
    int t,a;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {
        
        scanf("%d",&a);
        scanf("%lld",&n);

        square(a,n);
    }
    return 0;
	
}

