#include <bits/stdc++.h>

void weapon()
{ int c=0;
    int n;
    scanf("%d",&n);
    char *weap[n];
    int i,j;
   
    String s,s1;
    cin>>s;
    
    for(i=1; i<n;i++)
    
    {
        cin>>s1
        for(j=0; j<10; j++)
       {
           if(s[j]==s1[j] && s[j]=='1' )
            s[j]='0';
            else if(s[j] == '0' && s1[j]=='1')
            s[j]='1';
       }
       
    }
    for(j=0; j<10; j++)
       {
           if(s[j]=='1')
           c++;
       }
      printf("%d\n",c);
}






int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    weapon();
	}
	return 0;
}

