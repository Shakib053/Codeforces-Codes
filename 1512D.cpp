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
        ll n;
        cin >> n;
        ll a[n + 2];
        for (ll i = 0; i < n + 2; i++)
        {
            cin >> a[i];
        }
        ll size = n + 2;
        sort(a, a + size);
        ll sum = 0;
        ll m1 = a[size - 2];
        ll m2 = a[size - 1];
        for (ll i = 0; i < n; i++)
        {
            sum += a[i];
        }
        int flag = 0;
        if (sum == m1)
        {
            for (ll i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            sum += m1;
            for (ll i = 0; i < n + 1; i++)
            {
                if (sum - a[i] == m2)
                {
                    a[i] = -1;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << -1 << endl;
            else
            {
                for (ll i = 0; i < n + 1; i++)
                {
                    if (a[i] != -1)
                        cout << a[i] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
