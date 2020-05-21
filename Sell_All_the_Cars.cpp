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
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        ll profit = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] - i >= 0)
            {
                profit += arr[i] - i;
            }
            else
            {
                profit+=0;
            }
            
        }
        cout<<profit<<endl;
    }
    return 0;
}