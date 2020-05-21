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
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n%2==0)
    {
        ll x,y;
        x=(n/2)-1;
        y=(n/2);
        while(x>=0 || y<n)
        {
            cout<<arr[x]<<" "<<arr[y]<<" ";
            x--;
            y++;
        }
        cout<<endl;
    }
    else
    {
         ll x,y;
        x=(n/2)-1;
        y=(n/2)+1;
        cout<<arr[(n/2)]<<" ";
        while(x>=0 || y<n)
        {
            cout<<arr[x]<<" "<<arr[y]<<" ";
            x--;
            y++;
        }
        cout<<endl;
    }
    

}
return 0;
}