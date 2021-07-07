#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, mini;
        cin >> a >> b;
        if (b > a)
            mini = 1;
        else if (b == a)
            mini = 2;
        else
        {
            ll x = a;
            mini = 1000000;
            ll ans = 0;
            for (int i = b; i <= min(b + 30, a); i++)
            {
                if (i < 2)
                {
                    i++;
                }

                while (x > 0)
                {
                    x = x / i;
                    ans++;
                }
                ans = ans + i - b;

                mini = min(ans, mini);
                ans = 0;
                x = a;
            }
        }

        cout << mini << endl;
    }

    return 0;
}
