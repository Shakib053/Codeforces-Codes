#include <bits/stdc++.h>
#define ll long long
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
    un ll t;
    cin >> t;
    while (t--)
    {
        un ll x, check, c1, c2;
        cin >> x;
        un ll c = cbrt(x);
        // cout << c << endl;
        int flag = 0;
        for (un ll i = 1; i <= c; i++)
        {
            c1 = i * i * i;
            c2 = x - c1;
            check = cbrt(c2);
            un ll check2 = check * check * check;
            if (check2 == c2 && c2 != 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {

            cout << "YES\n";
            // cout << c2 << " " << check << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
