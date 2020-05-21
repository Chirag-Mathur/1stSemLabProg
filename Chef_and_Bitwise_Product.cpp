#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int mostSetBit(ll r, ll l)
{
    int a = (int)log2(r);
    int b = (int)log2(l);
    ll xp;
    int coun = 0;

    while (a == b)
    {
        if (coun > 15)
        {
            break;
        }
        xp = 1 << a;
        r = (r ^ xp);
        l = (l ^ xp);
        a = (int)log2(r);
        b = (int)log2(l);
        coun++;
    }
    //cout<<coun<<" ";
    return coun;
}

unsigned int countSetBits(ll n)
{
    unsigned int count = 0;
    while (n)
    {
        n &= (n - 1);
        count++;
    }
    return count;
}

int nearestBit(ll n)
{
    ll x = 1;
    //cout<<(x&n)<<"% "<<n<<"#";
    ll cn = 0;
    ll xx = x & n;
    while (xx == 0)
    {
        //cout<<"@"<<x<<" "<<n<<" ";
        x = x << 1;
        cn++;
        xx = x & n;
    }
    return cn;
}
int highestBit(ll n)
{
    int cn = 0;
    while (n != 0)
    { //cout<<"hi";
        cn++;
        n = n >> 1;
    }
    return cn;
}
ll power(int x, ll y)
{
    ll temp;
    if (y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, l, r;
        ll z;
        cin >> x >> y >> l >> r;
        ll r3 = r, l5 = l, l6 = l;
        z = x | y;
        ll zz, ptft, cnt, xs, pw, r2, zz2, ptft2, pp = 0, xp, cnt2;
        ll t1, t2;
        ll rx = 0;
        if (x == 0 || y == 0)
        {
            cout << l << endl;
        }
        else if (l == r)
        {
            cout << l << endl;
        }
        else
        {
            zz = r & z;
            ptft = (x & zz) * (y & zz);
            //cout<<ptft<<" "<<zz<<" ";
            cnt = countSetBits(r);
            for (int i = 1; i <= cnt; i++)
            {
                //cout<<"Hi";
                xs = nearestBit(r);
                //cout<<xs<<" "<<r<<" ";
                pw = power(2, xs);
                r = r ^ pw;

                r2 = r + (pw - 1);
                if (r2 >= l)
                {
                    //cout<<"r "<<r<<" ";
                    zz2 = r2 & z;
                    rx = r;
                    ptft2 = (x & zz2) * (y & zz2);
                    //cout<<zz<<" "<<ptft<<" ";
                    if (ptft2 >= ptft)
                    {
                        //cout<<"Hi";
                        ptft = ptft2;
                        zz = zz2;
                    }
                }
            }
            zz = zz | rx;
            //cout<<rx<<" ";
            //cout<<zz<<" ";
            if (ptft == 0)
            {
                cout << l5 << endl;
            }
            else
            {
                if (zz >= l5)
                    cout << zz << endl;
                else
                {
                    ll cc = 0;
                    ll cc2 = countSetBits(l6);
                    //cout<<"hi";
                    while (zz < l6)
                    {
                       // cout<<zz<<" ";
                        
                        t1 = (int)log2(l5);
                        t2 = 1 << t1;
                        //cout<<t1<<" ";
                        ll ppy = (t2 & l5);
                        //cout<<ppy<<"^ ";
                        if (ppy != 0)
                        {
                            //cout<<"@";
                            zz = zz | t2;
                            l5 = l5 ^ t2;
                        }
                        else
                        {
                            break;
                        }

                        cc++;
                    }
                    cout << zz << endl;
                }
            }
        }
    }
    return 0;
}
