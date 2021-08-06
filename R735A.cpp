#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;

int main()
{
    un ll t;
    cin >> t;
    while (t--)
    {
        un ll n;
        cin >> n;
        un ll a[n];
        vector<ll> v;
        for (un ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (un ll i = 0; i < n - 1; i++)
        {
            un ll x = a[i] * a[i + 1];
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        un ll s = v.size();
        un ll ans = v[s - 1];
        cout << ans << endl;
    }
    return 0;
}