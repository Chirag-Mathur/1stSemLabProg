#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
    ll zz, m;
    cin >> zz >> m;
    ll n;
    vector<ll> v;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    ll d=0;
    int flag=0;
    ll coun=0;
    vector<ll>::iterator l1;
    while(d<zz)
    {
        if(d+m>=zz)
        {
            //cout<<"HI";
            break;
        }
        l1=lower_bound(v.begin(),v.end(),d+m);
        if(v[l1-v.begin()]==d+m)
        {
            d=v[l1-v.begin()];
        }
        else if((l1-v.begin())-1<0 ||   v[(l1-v.begin())-1]==d)
        {
            flag=1;
            break;
        }
        else
        {
            d=v[(l1-v.begin())-1];
        }
        coun++;
        

    }
    if(flag==0)
    {
        cout<<coun<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    

    return 0;
}