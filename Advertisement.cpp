#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
    ll n;
    cin >> n;
    ll ar1[n];
    ll ar2[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar1[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>ar2[i];
    }
    sort(ar1, ar1+n);
    sort(ar2, ar2+n);
    ll sum=0;
    for(int i=n-1; i>=0; i--)
    {
        sum+=(ar1[i]*ar2[i]);
    }
    cout<<sum<<endl;
    return 0;
}