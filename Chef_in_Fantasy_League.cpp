#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, s;
        cin >> n;
        cin >> s;
        int ppp[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ppp[i];
        }
        int tt[n];
        int dd = 0, ff = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tt[i];
            if (tt[i] == 0)
            {
                dd++;
            }
            else
            {
                /* code */
                ff++;
            }
        }
        ll def[dd];
        ll fow[ff];
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (tt[i] == 0)
            {
                def[c1] = ppp[i];
                c1++;
            }
            else
            {
                fow[c2] = ppp[i];
                c2++;
            }
        }
        sort(def, def + dd);
        sort(fow, fow + ff);
        //cout<<def[0] + fow[0];
        if (def[0] + fow[0] <= (100 - s))
            cout << "yes" << endl;
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}