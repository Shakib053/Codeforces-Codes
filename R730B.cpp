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
        ll n;
        cin >> n;
        ll a[n];
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        ll avg;
        if (sum % n == 0)
            avg = sum / n;
        else
            avg = (sum / n) + 1;
        ll cnt = (avg * n) - sum;
        ll ans = (cnt * (n - cnt));
        cout << ans << endl;
    }

    return 0;
}
