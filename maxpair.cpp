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
sort(arr,arr+n);
cout<<arr[n-1]*arr[n-2];
return 0;
}