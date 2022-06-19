#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, s;
        cin >> n >> s;
        ll ans, med;

        if (n == 1)
        {
            cout << s << endl;
        }
        else
        {
            if (n % 2 == 1)
            {
                med = (n / 2) + 1;
                ans = s / (n - med + 1);
            }
            else
            {
                med = n / 2;
                ans = s / (n - med + 1);
            }
            cout << ans << endl;
        }
    }
    return 0;
}