#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
    ll n, q, k;
    cin >> n >> q >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    while (q--)
    {
        ll l, r, ans;
        cin >> l >> r;
        if (l == r)
            ans = k - 1;
        else
        {
            ans = k - a[r - 1] + a[l - 1] - 1 + 2 * ((a[r - 1] - a[l - 1] + 1) - (r - l + 1));
        }

        cout << ans << endl;
    }

    return 0;
}
