#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t;
scanf("%d",&t);
printf("%d\n",t);

   int x;
for(x=0; x<t; x++)
{
    int b,k,i,j,c;
    scanf("%d",&b);
    scanf("%d",&k);
    
    int book[b];

    for(i=0; i<b; i++)
        scanf("%d",&book[i]);

    for(i=0; i<k-1; i++)
    {
        for(j=i+1;j<k; j++)
        {
            if(book[i]>book[j])
            {
                c=book[i];
                book[i]=book[j];
                book[j]=c;
            }
        }
    }
    for(i=k+1; i<b-1; i++)
    {
        for(j=i+1; j<b; j++)
        {
            if(book[i]>book[j])
            {
                c=book[i];
                book[i]=book[j];
                book[j]=c;
            }
        }
    }
    for(i=0; i<b; i++)
        printf("%d ",book[i]);

      }
    printf("\n");

    return 0;
}
