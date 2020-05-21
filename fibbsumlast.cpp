#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
vector<ll> sum;
void sum10(ll n)
{
    sum.push_back(0);
    ll a = 1, b = 1, c, coun = 2, s = 0;
    sum.push_back(a);
    sum.push_back(a + b);
    s = a + b;
    while (a != 0 || b != 1)
    {
        c = (a + b) % 10;
        a = b;
        b = c;
        s = (s + c)%10;
        sum.push_back(s);
    }
    sum.pop_back();
    sum.pop_back();
}

int main()
{
    ll n, m;
    cin >> n;
    if (n > 1)
    {
        sum10(n);
        ll x = sum.size();
        //cout << x << endl;
        ll y = n % x;
        //ll z = n / x;
        //cout<<y<<endl;
        
            cout << ((sum[y]))%10 << endl;
       
    }
    else
    {
        if (n == 0)
            cout << "0" << endl;
        else
        {
            cout << "1" << endl;
        }
    }

    return 0;
}