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
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        int cnt = 0;
        int ans;
        for (ll i = 0; i < k; i++)
        {
            int flag = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (a[j] < a[j + 1])
                {
                    a[j] = a[j] + 1;
                    cnt++;
                    ans = j + 1;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                break;
        }
        if (cnt < k)
            cout << -1 << endl;
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}
