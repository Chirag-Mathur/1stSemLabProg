#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

ll gcd(ll a, ll b)
{

    if (a % b == 0)
        return b;
    else
    {
        gcd(b, a % b);
    }
}

int main()
{
    ll a, b;
    cin >> a >> b;
    ll x = max(a, b);
    ll y = min(a, b);
    cout << gcd(x, y) << endl;

    return 0;
}