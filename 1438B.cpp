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
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int flag = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
