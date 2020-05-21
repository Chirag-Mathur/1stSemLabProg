#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
    ll n;
    cin>>n;
    ll x=0;
    vector<ll> v;
    int i=0;
    int coun=0;
    while(n>0)
    {
        if(x+1<=n)
        {
            v.push_back(x+1);
            x=x+1;
            n=n-x;
            //cout<<n<<"#";
            coun++;
            

        }
        else
        {
            v[i-1]=n+v[i-1];
            n=0;
            //cout<<"@";
            break;
        }
        i++;

    }
    cout<<coun<<endl;
    for(int i=0; i<coun; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


return 0;
}