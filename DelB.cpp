#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;

// incomplete
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll odd = 0, even = 0, ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ll rem = x % 2;
            a[i] = rem;
            if (rem == 0)
                even++;
            else
                odd++;
        }
        ll check[n];
        ll cnt, c1;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (n % 2 == 0)
        {
            if (a[0] == 0)
            {
                for (ll i = 0; i < n; i++)
                {
                    if (i % 2 == 0)
                        check[i] = 0;
                    else
                        check[i] = 1;
                }
            }
            else
            {
                for (ll i = 0; i < n; i++)
                {
                    if (i % 2 == 0)
                        check[i] = 1;
                    else
                        check[i] = 0;
                }
            }
            if (even != odd)
            {
                cout << -1 << endl;
                continue;
            }
            else
            {
                cnt = 0;
                c1 = 0;
                for (ll i = 0; i < n; i++)
                {

                    if (a[i] == 0 && check[i] == 1 && c1 == 0)
                    {
                        cnt++;
                        c1 = 1;
                    }
                    else if (a[i] == 1 && check[i] == 0 && c1 == 0)
                    {
                        cnt++;
                        c1 = 2;
                    }
                    else
                    {
                        if (c1 == 1)
                        {
                            if (a[i] == 0 && check[i] == 1)
                                cnt++;
                            else if (a[i] != check[i])
                            {
                                cnt--;
                            }
                        }
                        else if (c1 == 2)
                        {
                            if (a[i] == 1 && check[i] == 0)
                                cnt++;
                            else if (a[i] != check[i])
                            {
                                cnt--;
                            }
                        }
                    }
                    if (cnt >= 0)
                        ans = ans + cnt;
                }
                cout << ans << endl;
            }
        }
        else
        {
            if (even > odd)
            {
                for (ll i = 0; i < n; i++)
                {
                    if (i % 2 == 0)
                        check[i] = 0;
                    else
                        check[i] = 1;
                }
            }
            else
            {
                for (ll i = 0; i < n; i++)
                {
                    if (i % 2 == 0)
                        check[i] = 1;
                    else
                        check[i] = 0;
                }
            }
            if (abs(even - odd) != 1)
            {
                cout << -1 << endl;
                continue;
            }
            else
            {
                cnt = 0;
                c1 = 0;
                for (ll i = 0; i < n; i++)
                {
                    if (a[i] == 0 && check[i] == 1 && c1 == 0)
                    {
                        cnt++;
                        c1 = 1;
                    }
                    else if (a[i] == 1 && check[i] == 0 && c1 == 0)
                    {
                        cnt++;
                        c1 = 2;
                    }
                    else
                    {
                        if (c1 == 1)
                        {
                            if (a[i] == 0 && check[i] == 1)
                                cnt++;
                            else if (a[i] != check[i])
                            {
                                cnt--;
                            }
                        }
                        else if (c1 == 2)
                        {
                            if (a[i] == 1 && check[i] == 0)
                                cnt++;
                            else if (a[i] != check[i])
                            {
                                cnt--;
                            }
                        }
                    }
                    if (cnt >= 0)
                        ans = ans + cnt;
                }
                cout << ans << endl;
            }
        }
    }
    return 0;
}