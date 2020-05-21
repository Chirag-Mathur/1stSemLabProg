#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
int t;
cin>>t;
while(t--)
{
    ll a,b,q;
    cin>>a>>b>>q;
    ll maxx=max(a,b);
    ll gg=__gcd(a,b);
    ll lcm=(a*b)/gg;
    ll x,y;
    ll aa,bb,cc,dd,ee,hh,kk,total=0,t2=0,t1=0;
    for(int i=0; i<q; i++)
    {
        t1=0,t2=0;
        cin>>hh>>kk;
        x=min(hh,kk);
        y=max(hh,kk);
        aa=x/lcm;
        bb=y/lcm;
        //cout<<aa<<" "<<bb<<" ";
        for(int i=(aa*lcm); i<x && i<(aa*lcm)+maxx; i++)
        {
            t2++;

        }
        if((aa-1)>0)
        {
            t2+=(aa-1)*maxx;
            
        }
         for(int i=(bb*lcm); i<=y && i<(bb*lcm)+maxx; i++)
        {
            t1++;

        }
        if((bb-1)>0)
        {
            t1+=(bb-1)*maxx;
        }
       
        total=(t1-t2);
         //cout<<t1<<" "<<t2<<" "<<total<<"%";
        cout<<((y-x)+1)-total<<" ";

    }
    cout<<endl;



}
return 0;
}