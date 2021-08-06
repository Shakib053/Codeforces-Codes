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
        int cnt;
        vector<ll> v[n + 3];
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
            v[x].push_back(i);
        }
        vector<ll> v1;
        ll ans[n + 3] = {0};
        for (auto i : mp)
        {
            ll x = i.first;
            ll y = i.second;
            if (y >= k)
            {
                cnt = 1;
                for (int i = 0; i < k; i++)
                {
                    ans[v[x][i]] = cnt;
                    cnt++;
                }
            }
            else
            {
                for (int i = 0; i < v[x].size(); i++)
                {
                    v1.push_back(v[x][i]);
                }
            }
        }
        for (int i = 0; i < v1.size() - (v1.size() % k); i++)
        {

            if (i % k == 0)
                cnt = 1;
            ans[v1[i]] = cnt;
            cnt++;
        }
        for (ll i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}
