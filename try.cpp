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
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        multimap<ll, ll> map;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            map.insert(pair<ll, ll>(arr[i], i));
        }
        sort(arr, arr + n);
        int flag = 0, f2 = 0;
        // for(int i=0; i<n; i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;

        ll key;
        typedef multimap<ll, ll>::iterator iterator;
        for (int i = 0; i < n; i++)
        {
            key = arr[i];
           // cout<<"HI"<<key;
            pair<iterator, iterator> iterpair = map.equal_range(key);
            //cout<<key<<"!!!!";
            iterator it = iterpair.first;
            for (; it != iterpair.second; ++it)
            {
                //cout<<it->second<<"# "<<i<<" ";
                if (abs(i - it->second) % k == 0)
                {
                   // cout<<it->second<<"$ ";
                    map.erase(it);
                    f2 = 1;
                    break;
                }
            }

            if (f2 == 1)
            {
                f2 = 0;
                continue;
            }

            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}