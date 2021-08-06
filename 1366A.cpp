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
        ll a, b;
        cin >> a >> b;
        ll ans;
        ll mini = min(a, b);
        ll maxi = max(a, b);
        if (a == 0 || b == 0)
            ans = 0;
        // else if (a == b)
        //     ans = a / 2;
        else
        {
            ans = (a + b) / 3;
            if (ans > mini)
                ans = mini;
        }
        cout << ans << endl;
    }
    return 0;
}
