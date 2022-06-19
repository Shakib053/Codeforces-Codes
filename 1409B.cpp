#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
ll product(ll a, ll b, ll x, ll y, ll n)
{
    ll temp = min(n, a - x);
    a = a - temp;
    n = n - temp;
    temp = min(n, b - y);
    b = b - temp;
    ll xx = a * b;
    return xx;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        ll mul1, mul2, ans;
        mul1 = product(a, b, x, y, n);
        mul2 = product(b, a, y, x, n);
        ans = min(mul1, mul2);
        cout << ans << endl;
    }
    return 0;
}
