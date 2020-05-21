#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int main()
{
    ll a, b;
    cin >> a >> b;
    ll coun = 0;
    ll flag = 0;
    if (b <= 2)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }

    while (a > 0 && b > 0)
    {
        if (flag == 0)
        {
            while (b > 2)
            {
                a++;
                b -= 2;
                coun++;
                //cout<<coun<<"@ "
                flag = 1;
            }
        }
        //cout<<a<<" "<<b<<endl;
        if (flag == 1)
        {
            while (a > 2)
            {
                b++;
                a -= 2;
                coun++;
                flag = 0;
            }
        }
        //cout<<a<<" "<<b<<endl;
        if (b == 2 && flag == 0 || a == 2 && flag == 1 || a==2 && b==1 || a==1 && b==2)
        {
            //cout<<"#";
            coun++;
            break;
        }
        else if (b <= 1 && flag == 0 || a <= 1 && flag == 1)
        {
            //cout<<"#";
           
            break;
        }
    }
    cout << coun << endl;

    return 0;
}