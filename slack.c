#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int child()
{
  int i,j,c=0;
  int n;
  scanf("%d",&n);

  int h[n];
  int w[n];
  for(i=0; i<n; i++)
  {
    scanf("%d",&h[i]);
    scanf("%d",&w[i]);

  }

  for(i=0; i<(n-1); i++)
  {
    for(j=i+1; j<n; j++)
    {
      if(h[i]>h[j] && w[i]<w[j] || h[j]>h[i] && w[j]<w[i])
      c++;
    }
  }

  return c;
}



int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d",&t);
    int i;
    int ans[t];
    for(i=0; i<t; i++)
    {
      ans[i]=child();

    }

    for(i=0; i<t; i++)
    {
      printf("%d\n",ans[i]);
    }
    return 0;
}
