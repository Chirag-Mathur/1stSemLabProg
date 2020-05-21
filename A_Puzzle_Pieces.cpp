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
    ll x,y;
    cin>>x>>y;
    if(x==1||y==1)
    {
        cout<<"YES"<<endl;
    }
    else if(x==2 && y==2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

}
return 0;
}