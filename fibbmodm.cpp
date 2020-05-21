#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
vector<ll> piss;
void pissano(ll n, ll m)
{
    piss.push_back(0);
    ll a = 1, b = 1, c, coun = 2;
    piss.push_back(a);
    piss.push_back(b);
    while (a != 0 || b != 1)
    {
        c = (a + b) % m;
        a = b;
        b = c;
        piss.push_back(c);
    }
    piss.pop_back();
    piss.pop_back();
}

int main()
{
    ll n, m;
    cin >> n >> m;
    if (n > 2)
    {
        pissano(n, m);
        ll x = piss.size();
        cout << x << endl;
        ll y = n % x;
        //cout<<y<<endl;

        cout << piss[y];
    }
    else
    {
        if (n==0)
        cout << "0" << endl;
        else
        {
            cout<<"1"<<endl;
        }
        
    }

    return 0;
}