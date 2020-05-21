#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    string str1,str2;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            str1=arr[i]+arr[j];
            str2=arr[j]+arr[i];
            if(str1.compare(str2)<0)
            {
                swap(arr[i],arr[j]);

            }

        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }

return 0;
}