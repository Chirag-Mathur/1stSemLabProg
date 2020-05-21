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
        unordered_map<ll, ll> umap;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            umap[arr[i]] = i;
        }
        sort(arr, arr + n);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (abs(i - umap[arr[i]]) % k == 0)
                continue;
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"yes"<<endl;

        }
        else
        {
            cout<<"no"<<endl;
        }
        
    }
    return 0;
}