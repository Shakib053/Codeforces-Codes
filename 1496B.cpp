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
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            st.insert(x);
        }
        vector<ll> v;
        for (auto i : st)
        {
            ll y = i;
            v.push_back(y);
        }
        int flag = 0;
        ll mex;
        for (ll i = 0; i < v.size() - 1; i++)
        {
            if (abs(v[i] - v[i + 1]) != 1)
            {
                flag = 1;
                mex = v[i] + 1;
                break;
            }
        }
        ll ans;
        if (k == 0)
            ans = n;
        else if (v[0] == 0 && flag == 0)
            ans = n + k;
        else
        {
            ll check = (mex + v[v.size() - 1]);
            if (check % 2 == 0)
                check = check / 2;
            else
                check = (check / 2) + 1;
            int f = 0;
            for (auto i : v)
            {
                if (i == check)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                ans = n;
            else
                ans = n + 1;
        }
        cout << ans << endl;
    }

    return 0;
}
