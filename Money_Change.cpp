#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{

    ll n;
    cin>>n;
    ll coun=0;
    coun=coun+(n/10);
    n=n%10;
    //cout<<n<<" ";
    coun=coun+(n/5);
    n=n%5;
     //cout<<n<<" ";
    coun=coun+n;
    cout<<coun<<endl;
    return 0;
}