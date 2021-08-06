#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
un ll power(unsigned long long x, unsigned long long y, un ll p)
{
    int res = 1;

    x = x % p;

    if (x == 0)
        return 0;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        un ll n, k;
        cin >> n >> k;
        un ll ans = power(n, k, mod);
        cout << ans << endl;
    }
    return 0;
}
