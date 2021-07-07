#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
    ll l, r;
    cin >> l >> r;
    vector<ll> v;
    v.push_back(4);
    v.push_back(7);
    for (int i = 0; i < 2000; i++)
    {
        ll x = v[i] * 10 + 4;
        ll y = v[i] * 10 + 7;
        v.push_back(x);
        v.push_back(y);
    }
    ll sum = 0;
    for (auto i : v)
    {
        if (i >= l)
        {
            sum = sum + i * (min(r, i) - l + 1);
            l = i + 1;
        }
        if (l > r)
            break;
    }
    cout << sum << endl;
    return 0;
}
