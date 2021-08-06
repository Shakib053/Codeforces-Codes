#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, ans2;
        cin >> a >> b;
        ll ans1 = abs(a - b);
        if (a == 0 && b == 0)
            cout << 0 << " " << 0 << endl;
        else if (a == b)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            if (ans1 == 1)
                ans2 = 0;
            else if (ans1 == __gcd(a, b))
            {
                ans2 = 0;
            }
            else
            {

                ll cnt2 = min(a, b);
                ll check = cnt2 % ans1;
                ll cnt = ans1 - check;
                ans2 = min(cnt, check);
            }

            cout << ans1 << " " << ans2 << endl;
        }
    }

    return 0;
}
