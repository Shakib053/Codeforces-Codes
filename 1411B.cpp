#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
ll fair(ll x)
{
    ll y = x;
    vector<ll> v;
    while (x > 0)
    {
        ll rem = x % 10;
        x = x / 10;
        if (rem != 0)
            v.push_back(rem);
    }
    int flag = 1;
    for (ll i = 0; i < v.size(); i++)
    {
        if (y % v[i] != 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        while (1)
        {
            if (fair(n) == 1)
            {
                cout << n << endl;
                break;
            }
            else
                n++;
        }
    }

    return 0;
}
