#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
    vector<pair<ll, ll>> vect;
    ll n;
    cin>>n;
    ll x,y;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        vect.push_back(make_pair(x,y));

    }
    sort(vect.begin(),vect.end());
    ll coun=0;
    ll t1;
    vector <int> v;
    for(int i=n-1; i>=0;)
    {
        t1=vect[i].first;
        v.push_back(t1);
        coun++;
        while(i>=0 && vect[i].second>=t1)
        {
            i--;            
        }


    }
    cout<<coun<<endl;
    for(int i=0; i<coun; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    
    return 0;
}