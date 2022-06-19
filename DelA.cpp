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
        ll c, d;
        cin >> c >> d;
        if (c == 0 && d == 0)
            cout << 0 << endl;
        else if (c == d)
        {
            cout << 1 << endl;
        }
        else
        {
            ll x = c + d;
            if (x % 2 == 0)
                cout << 2 << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}