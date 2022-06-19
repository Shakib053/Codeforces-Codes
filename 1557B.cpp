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
        int n, k;
        cin >> n >> k;
        ll a[n + 1];
        ll b[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        a[n] = LONG_MAX;
        b[n] = LONG_MAX;
        sort(b, b + n + 1);
        int cnt = 0;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            mp[b[i]] = b[i + 1];
        }
        for (int i = 0; i < n; i++)
        {
            while (mp[a[i]] == a[i + 1] && i < n)
            {
                i++;
            }
            cnt++;
        }
        if (cnt <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
