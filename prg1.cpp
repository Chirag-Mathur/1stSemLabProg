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
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    ll a1=a,b1=b;
    ll cost2=(abs(a1)+abs(b1))*x;
    ll cost=(abs(a-b)*x);
    ll z=min(abs(a),abs(b));
    a=z;
    b=z;
    cost+=(abs(z)*y);
    cout<<min(cost,cost2)<<endl;



}
return 0;
}