#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
    int n,k,l;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&k);
    char s[10],c[10];
    int z;
    char ch;
    for(int i=0; i<n;i++)
    a[i]=0;

    for(int i=0; i<k; i++)
    { int b=0;
    ;

        scanf("%s",s);

        if(strcmp(s,"CLICK")==0)
        {
          scanf("%d",&z);
          


            if(a[z-1]==0)
            a[z-1]=1;
            else
            a[z-1]=0;
        }
        else
        {
            for(int i=0; i<n;i++)
            a[i]=0;
        }
        int x=0;
        for(int i=0; i<n; i++)
        {

            if(a[i]==1)
            x++;
        }

        printf("%d\n",x);
        x=0;
    }


	return 0;
}
