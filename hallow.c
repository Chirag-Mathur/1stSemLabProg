#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,x,k;
    long long int i;
    long double m;
    scanf("%d",&t);



    for(i=0; i<t; i++)
    {
        int j;
        int c,d;
        scanf("%d",&n);
        double f;

        scanf("%llf",&m);
        d=(int)(log(m)/log(2));

        for(j=0; j<n; j++)
        {
            scanf("%d",&x);

            if(x-1 && !(x-1 & (x - 2)))
            { k=(int)(log(x+1)/log(2));
            if(k<=d)
            { f=(ceil)m/(x+1);
             c=(int)f;
             printf("YES %d\n",c);}
             else
             if(k<=d+1)
             {
               printf("YES 1\n");
             }

           }


                else
                    printf("NO \n");
            }
        c=0;
        }








    return 0;
}
