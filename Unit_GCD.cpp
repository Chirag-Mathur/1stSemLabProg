#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "1" << endl;
            cout << "1 1" << endl;
        }
        else if (n == 2)
        {
            cout << "1" << endl;
            cout << "2 1 2" << endl;
        }
        else if (n == 3)
        {
            cout << "1" << endl;
            cout << "3 1 2 3" << endl;
        }
        else
        {
            cout << n / 2 << endl;
            cout << "3 1 2 3\n";
            if (n % 2 != 0)
            {
                for (ll i = 4; i <= n; i++)
                {
                    if (i % 2 == 0)
                    {
                        cout << "2 ";
                    }
                    cout << i << " ";
                    if (i % 2 != 0)
                    {
                        cout << "\n";
                    }
                }
            }
            else
            {
                for (ll i = 4; i <= n - 1; i++)
                {
                    if (i % 2 == 0)
                    {
                        cout << "2 ";
                    }
                    cout << i << " ";
                    if (i % 2 != 0)
                    {
                        cout << "\n";
                    }
                }
                cout << "1 " << n << "\n";
            }
            //cout<<n<<endl;
        }
    }
    return 0;
}