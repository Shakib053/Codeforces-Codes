#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
    ll n, q;
    cin >> n >> q;
    list<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    while (q--)
    {
        ll t;
        cin >> t;
        ll ans;
        ll cnt = 1;
        for (auto i = v.begin(); i != v.end(); i++)
        {
            if (*i == t)
            {
                v.erase(i);
                cnt++;
                ans = cnt;
                break;
            }
            else
                cnt++;
        }
        v.push_front(t);

        cout << ans - 1 << endl;
        // for (auto i : v)
        //     cout << i << " ";
        // cout << endl;
    }

    return 0;
}
