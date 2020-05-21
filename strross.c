#include<stdio.h>
void ross();
int main()

{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ross();
    }

}

void ross()
{
    int q,x,y,coun;
    long int n,l,b;
    char ch;
    long long int p;
    scanf("%ld",&n);
    long long int a[n+1];
    long int i,j;
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&a[i]);
    }
    scanf("%d",&q);
    coun=0;
   // printf("%d",q);
    for(y=1; y<=q; y++)
    {  
        //printf("Hello\n");
       scanf("%c",&ch);
       //printf("%c\n",&ch);
        scanf("%c",&ch);
        //printf("%c\n",&ch);
        coun++;
        if(ch=='u')

        {
            //printf("Hello");
            scanf("%d",&x);
            scanf("%lld",&p);
            a[x]=p;
            
        }
        else if(ch=='c')
        {
            scanf("%d",&l);
            scanf("%d",&b);
            scanf("%lld",&p);
            int flag=0;
            for(i=l; i<b; i++)
            {
                for(j=i+1; j<=b; j++)
                {
                    if((a[i]^a[j])<=p)
                    {
                        //printf("%lld",(a[i]^a[j]));
                        flag=1;
                        break;
                        
                    }
                }
                if(flag==1)
                break;
            }
            if(flag==0)
            printf("YES\n");
            else
            {
                printf("NO\n");
            }
            flag =0;
            
        }
        //coun--;
        
        //if(coun==q*2)
        //break;
        //printf("%d\n",y);
        
    }

}