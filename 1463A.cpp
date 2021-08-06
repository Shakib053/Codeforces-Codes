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
        ll a, b, c;
        cin >> a >> b >> c;
        ll sum = a + b + c;

        if (sum % 9 != 0)
            cout << "NO\n";
        else
        {
            ll check = sum / 9;
            if (a < check || b < check || c < check)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }

    return 0;
}
