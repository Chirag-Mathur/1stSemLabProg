#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int k=0;
    int coun=0;
    int n,x,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            k++;
           
        }
        else
        {
            if(coun==0)
            {
                k=0;
            }
            else
            {
                if(k==5)
                {
                    k=0;
                }
                else
                {
                    /* code */
                    flag=1;
                    break;
                }
                //coun++;
                
            }
            coun++;
            

        }
        
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}   
return 0;
}