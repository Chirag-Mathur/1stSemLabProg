#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
    int n;
    cin >> n;
    ll a = 1, b = 1, c;
    if (n == 0)
        cout << "0" << endl;
    else if (n <= 2)
        cout << a;
    else
    {
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << endl;
    }

    return 0;
}