#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
ll n;
cin>>n;
ll arr[n];
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}

ll dp[n];
for(int i=0; i<n; i++)
{
    dp[i]=1;
}
for(int i=1; i<n; i++)
{
    if(arr[i]>=arr[i-1])
    {
        dp[i]=dp[i-1]+1;
        //cout<<dp[i]<<"@ ";

    }
}
sort(dp,dp + n);
cout<<dp[n-1]<<endl;

return 0;
}