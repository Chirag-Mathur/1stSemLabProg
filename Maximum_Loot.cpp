#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
    unordered_map<double, ll> umap;
    ll n;
    double sumf;
    cin >> n >> sumf;
    double arr[n];
    double x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr[i] = ((double)x / (double)y);
        //cout<<arr[i]<<" ";
        //cout<<(10.0)/3.0<<" ";
        if (umap.find(arr[i]) == umap.end())
        {
            umap[arr[i]] = y;
        }
        else
        {
            umap[arr[i]] += y;
        }
    }
    sort(arr,arr+n,greater<double>());
    // for(int i=0; i<n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    //cout<<endl;
    double sum=0.0000;
    ll sumx=0;
    ll i=0;
    while(sumx<sumf)
    {
        if(umap[arr[i]]<=(sumf-sumx))
        {
            sum+=(umap[arr[i]])*arr[i];
            
            sumx+=(umap[arr[i]]);
            //cout<<sumx<<" "<<(umap[arr[i]])*arr[i]<<"# ";
        }
        else{
            sum+=arr[i]*(sumf-sumx);
            //cout<<sumf-sumx<<" "<<(umap[arr[i]]*(sumf-sumx))<<"@ ";
            sumx+=(sumf-sumx);
            
            break;
        }
        i++;
        if(i==n)
        {
            break;
        }

    }
    printf("%.4lf\n",sum);



    return 0;
}