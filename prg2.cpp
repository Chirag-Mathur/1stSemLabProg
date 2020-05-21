#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                c0++;
            }
            else
            {
                c1++;
            }
        }
        //cout<<c1<<" "<<c0<<endl;
        string s2 = "";
        ll x=1;
        if (c1 > 0 && c0 > 0)
        {

            if (s[0] == '1')
            {
                s2='1';
                for (int i = 1; i < s.length();)
                {
                    if(x%2!=0)
                    {
                         if (s[i]=='0')
                         {
                             s2=s2+'0';
                             i++;
                             x++;
                         }
                         else
                         {
                             /* code */
                             s2=s2+'0';
                             x++;
                         }
                         
                    }
                    else
                    {
                        /* code */
                         if (s[i]=='1')
                         {
                             s2=s2+'1';
                             i++;
                             x++;
                         }
                         else
                         {
                             /* code */
                             s2=s2+'1';
                             x++;
                         }
                    }
                    
                   
                }
            }
            else
            {
                s2='0';
                for (int i = 1; i < s.length();)
                {
                    if(x%2!=0)
                    {
                         if (s[i]=='1')
                         {
                             s2=s2+'1';
                             i++;
                             x++;
                         }
                         else
                         {
                             /* code */
                             s2=s2+'1';
                             x++;
                         }
                         
                    }
                    else
                    {
                        /* code */
                         if (s[i]=='0')
                         {
                             s2=s2+'0';
                             i++;
                             x++;
                         }
                         else
                         {
                             /* code */
                             s2=s2+'0';
                             x++;
                         }
                    }
                    
                   
                }
            }
            cout<<s2<<endl;
            
        }
        else
        {
            //cout<<"Hi"<<endl;
            cout<<s<<endl;
        }
        
    }
    return 0;
}