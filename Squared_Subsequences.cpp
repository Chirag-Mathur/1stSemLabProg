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
        ll n;
        cin >> n;
        ll arr[n];
        ll z;
        for (int i = 0; i < n; i++)
        {
            cin >> z;
            arr[i] = abs(z);
        }
        vector<ll> v;
        vector<ll> v2;
        //v.resize(n);
        int p = 0, q = 0, y;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 4 == 0 && arr[i]%2==0)
            {
                //cout<<arr[i]<<"@ ";
                v.push_back(i);
            }
            else if (arr[i] % 2 == 0 && arr[i] % 4 != 0)
            {
                //cout<<arr[i]<<"! ";
                v2.push_back(i);
            }
            else
            {
                y = i;
                //cout<<arr[i]<<"# ";
                q = 0;

                while (arr[y] % 2 != 0)
                {
                    q++;
                    i = y;
                    y++;
                }
                sum += ((q * (q + 1)) / 2);
                //cout << sum << "#"<<i<<" ";
                q = 0;
            }
        }
        sort(v.begin(), v.end());
        sort(v2.begin(), v2.end());
        // cout<<4<<"$\n";
        // for(int i=0; i<v.size(); i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        // cout<<2<<"(\n";
        // for(int i=0; i<v2.size(); i++)
        // {
        //     cout<<v2[i]<<" ";
        // }
        // cout<<endl;

        vector<ll>::iterator lower;
        for (int i = 0; i < n; i++)
        {
            lower = lower_bound(v.begin(), v.end(), i);
            if ((lower - v.begin()) != v.size())
            {
                //cout << " " << n << " " << v[lower - v.begin()] << "* " << endl;
                sum += (n - (v[lower - v.begin()]));
                //cout<<sum<<"!\n";
            }

            //  cout<<sum<<"^";
        }
        vector<ll>::iterator l1, l2, l3;
        int k, x, gg;
        for (int i = 0; i < n; i++)
        {
            x = i;
           // cout<<"i="<<x<<endl;
            l2 = lower_bound(v2.begin(), v2.end(), x);
            if ((l2 - v2.begin()) != v2.size())
            {
                l1 = lower_bound(v.begin(), v.end(), x);
                if ((l1 - v.begin()) != v.size())
                {
                   // cout<<v2[l2 - v2.begin()]<<"$"<<v[l1 - v.begin()]<<endl;
                    if (v2[l2 - v2.begin()] < v[l1 - v.begin()])
                    {
                        x = v2[l2 - v2.begin()];
                        l2 = lower_bound(v2.begin(), v2.end(), x + 1);
                        if ((l2 - v2.begin()) != v2.size())
                        {
                            l1 = lower_bound(v.begin(), v.end(), x + 1);
                            if ((l1 - v.begin()) != v.size())
                            {
                               // cout<<v2[l2 - v2.begin()]<<"^"<<v[l1 - v.begin()]<<endl;
                                if (v2[l2 - v2.begin()] < v[l1 - v.begin()])
                                {

                                    k = v2[l2 - v2.begin()];
                                    l3 = lower_bound(v.begin(), v.end(), k);
                                    sum += (v[l3 - v.begin()] - k);
                                    //cout << sum << "! ";
                                }
                                else
                                {
                                    i = arr[l1 - v.begin()];
                                }
                            }
                            else
                            {
                                /* code */
                                sum += n - v2[l2 - v2.begin()];
                                //cout << sum << "@ ";
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                    else
                    {
                        i = v[l1 - v.begin()];
                        //cout<<i<<"@\n";
                    }
                }
                else
                {
                    /* code */
                    l2 = lower_bound(v2.begin(), v2.end(), x);
                    if ((l2 - v2.begin()) != v2.size())
                    {
                        gg = v2[l2 - v2.begin()];
                        l3 = lower_bound(v2.begin(), v2.end(), gg + 1);
                        if ((l3 - v2.begin()) != v2.size())
                        {
                            sum += n - v2[l3 - v2.begin()];
                            //cout << sum << "& " << l2 - v2.begin() << " ";
                        }
                        else
                        {
                            break;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                break;
            }
        }

        cout << sum << endl;
    }
    return 0;
}