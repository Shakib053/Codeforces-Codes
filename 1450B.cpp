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
        ll n, k;
        cin >> n >> k;
        vector<pair<ll, ll>> vp;
        while (n--)
        {
            ll x, y;
            cin >> x >> y;
            vp.push_back({x, y});
        }
        int flag = 0;
        for (ll i = 0; i < vp.size(); i++)
        {
            flag = 0;
            for (ll j = 0; j < vp.size(); j++)
            {
                ll x = abs(vp[i].first - vp[j].first) + abs(vp[i].second - vp[j].second);
                if (x > k)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                break;
        }
        if (flag == 1)
            cout << -1 << endl;
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
