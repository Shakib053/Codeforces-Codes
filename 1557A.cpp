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
        int n;
        cin >> n;
        ll a[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll maxi = a[0];
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, a[i]);
        }
        double ans = (double)sum - (double)maxi;
        ans = (double)maxi + ((double)ans / (double)(n - 1));
        cout << fixed << setprecision(6) << ans << endl;
    }
    return 0;
}
