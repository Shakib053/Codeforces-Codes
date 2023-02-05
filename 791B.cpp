#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
    ll n, q;
    cin >> n >> q;

    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr[i] = x;
    }
    ll sum = 0;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        mp[i] = arr[i];
        sum = sum + arr[i];
    }
    int flag = 0;
    ll store;
    for (ll i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            ll index, x;
            cin >> index >> x;
            if (mp[index - 1] == 0)
            {
                cout << "t " << t << " " << mp[index - 1] << endl;
                mp[index - 1] = store;
            }
            sum = sum - mp[index - 1] + x;
            mp[index - 1] = x;

            cout << sum << endl;
        }
        else
        {
            ll temp;
            flag = 1;
            cin >> temp;
            mp.clear();
            store = temp;
            sum = temp * n;

            cout << sum << endl;
        }
    }
    return 0;
}