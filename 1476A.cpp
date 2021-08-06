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
        ll ans;
        if (n == 1)
            ans = k;
        else if (n < k)
        {

            if (k % n == 0)
                ans = k / n;
            else
                ans = (k / n) + 1;
        }
        else
        {
            if (n % k == 0)
                ans = 1;
            else
                ans = 2;
        }
        cout << ans << endl;
    }

    return 0;
}
