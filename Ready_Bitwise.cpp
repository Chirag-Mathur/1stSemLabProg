#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 998244353

long long int power(int x, long long int y, long long int m);

//ll p=1,q=1;

ll mulmod(ll a, ll b, ll mod)
{
    ll res = 0; // Initialize result
    a = a % mod;
    while (b > 0)
    {
        // If b is odd, add 'a' to result
        if (b % 2 == 1)
            res = (res + a) % mod;

        // Multiply 'a' with 2
        a = (a * 2) % mod;

        // Divide b by 2
        b /= 2;
    }

    // Return result
    return res % mod;
}
long long int gcd(long long int a, long long int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long long int modInverse(int a, long long int m)
{
    long long int g = gcd(a, m);
    if (g != 1)
        return 0;
    else
    {
        // If a and m are relatively prime, then modulo inverse
        // is a^(m-2) mode m
        return power(a, m - 2, m);
    }
}

// To compute x^y under modulo m
long long int power(int x, long long int y, long long int m)
{
    if (y == 0)
        return 1;
    long long int p = power(x, y / 2, m) % m;
    p = (p * p) % m;

    return (y % 2 == 0) ? p : (x * p) % m;
}

ll prob(string s, char ch)
{
    ll l = s.length();
    //ll x=k+1;
    ll a = 0;
    ll i = 1, j = l - 2;
    ll gg = 0;
    int c = 0, c2 = 0;
    if (l == 1)
    {
        return 1;
    }
    else if (l == 5)
    {
        if (s[i] == '&')
        {
            if (ch == '0')
            {
                return 9;
            }
            else if (ch == '1')
            {
                return 1;
            }
            else if (ch == 'a')
            {
                return 3;
            }
            else
            {
                return 3;
            }
        }
        else if (s[i] == '|')
        {
            if (ch == '1')
            {
                return 9;
            }
            else if (ch == '0')
            {
                return 1;
            }
            else if (ch == 'a')
            {
                return 3;
            }
            else
            {
                return 3;
            }
        }
        else if (s[i] == '^')
        {
            return 4;
        }
    }
    else
    {
        string str = "", str2 = "";
        do
        {
            if (s[i] == '(')
            {
                str = str + s[i];
                c++;
            }
            else if (s[i] == ')')
            {
                str = str + s[i];
                c--;
            }
            else
            {
                str = str + s[i];
            }
            i++;

        } while (c == 0);
        do
        {
            if (s[j] == ')')
            {
                str2 = s[j] + str2;
                c2++;
            }
            else if (s[j] == '(')
            {
                str2 = s[j] + str2;
                c2--;
            }
            else
            {
                str2 = str2 + s[j];
            }
            j--;
        } while (c2 == 0);
        ll zz = 0;
        ll a = prob(str, '0'), b = prob(str, '1'), c = prob(str, 'a'), d = prob(str, 'A'), e = prob(str2, '0'), f = prob(str2, '1'), g = prob(str2, 'a'), h = prob(str2, 'A');
        if (s[i] == '&')
        {

            if (ch == '0')
                zz = (a * (e + f + g + h)) + (b * e) + (c * (e + h)) + (d * (a + c));
            else if (ch == '1')
                zz = b * f;
            else if (ch == 'a')
                zz = c * (f + g) + (b * g);
            else
            {
                zz = d * (f + h) + (b * h);
            }

            return zz % MOD;
        }
        else if (s[i] == '|')
        {
            if (ch == '1')
            {
                zz = (b * (e + f + g + h)) + (c * (f + h)) + (d + (f + g)) + (a * f);
            }
            else if (ch == '0')
            {
                zz = (a * e);
            }
            else if (ch == 'a')
            {
                zz = (c * (a + g)) + (a * g);
            }
            else
            {
                zz = (d * (e + h)) + (a * h);
            }

            return zz % MOD;
        }
        else
        {
            if (ch == '1')
            {
                zz = (b * e) + (a * f) + (c * h) + (d * g);
            }
            else if (ch == '0')
            {
                zz = (b * f) + (a * e) + (c * g) + (d * h);
            }
            else if (ch == 'a')
            {
                zz = (b * h) + (d * f) + (a * g) + (c * e);
            }
            else
            {
                zz = (b * g) + (c * f) + (a * h) + (d * e);
            }

            return zz % MOD;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll k = 1;
        int l = s.length();
        ll xx = ((l - 1) / 4) + 1;
        ll q = power(4, xx, MOD);
        //ll p1=prob(s, 0);
        ll zz1 = mulmod(modInverse(q, MOD), prob(s, '0'), MOD);
        ll zz2 = mulmod(modInverse(q, MOD), prob(s, '1'), MOD);
        ll zz3 = mulmod(modInverse(q, MOD), prob(s, 'a'), MOD);
        ll zz4 = mulmod(modInverse(q, MOD), prob(s, 'A'), MOD);
        cout << zz1 << " " << zz2 << " " << zz3 << " " << zz4 << endl;
    }
    return 0;
}