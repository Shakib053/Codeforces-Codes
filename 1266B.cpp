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
        ll a;
        cin >> a;
        if (a < 15)
            cout << "NO\n";
        else
        {
            if (a % 14 == 1 || a % 14 == 2 || a % 14 == 3 || a % 14 == 4 || a % 14 == 5 || a % 14 == 6)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
