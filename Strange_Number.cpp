#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
int t;
cin>>t;
while(t--)
{
    ll x,k;
    cin>>x>>k;
    if(x==(1<<k))
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    

}
return 0;
}