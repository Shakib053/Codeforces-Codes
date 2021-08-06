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
        ll n;
        cin >> n;
        ll on = n;
        ll a[n];
        ll b[n];
        vector<ll> v1, v2;
        ll sum1 = 0, sum2 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum1 = sum1 + a[i];
            v1.push_back(a[i]);
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            sum2 = sum2 + b[i];
            v2.push_back(b[i]);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        ll rem = n / 4;
        for (ll i = 0; i < rem; i++)
        {
            sum1 = sum1 - v1[i];
            sum2 = sum2 - v2[i];
        }
        ll ans = 0;
        ll orem = n / 4;
        ll y = orem - 1;
        ll cnt = 0;
        while (sum2 > sum1)
        {
            v1.push_back(100);
            sum1 = sum1 + 100;
            if (y >= 0)
            {
                sum2 = sum2 + v2[y];
                y--;
            }
            cnt++;
            n++;
            rem = n / 4;
            if (rem > orem)
            {
                sum1 = sum1 - v1[rem - 1];
                orem = rem;
                if (cnt < orem)
                {
                    sum2 = sum2 - v2[y + 1];
                    y++;
                }
            }
            // ans++;
        }
        ans = v1.size() - on;
        cout << ans << endl;
    }

    return 0;
}
