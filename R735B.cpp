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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        ll ans = INT64_MIN;
        for (ll i = n; i > 0; i--)
        {
            for (ll j = i - 1; j > 0; j--)
            {
                ll x = (i * j) - k * (a[i] | a[j]);
                ans = max(ans, x);
                if (abs(i - j) > 100)
                    break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
