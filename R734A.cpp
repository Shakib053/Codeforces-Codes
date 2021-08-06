#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll c1, c2;
        cin >> n;
        if (n % 3 == 0)
        {
            c1 = n / 3;
            c2 = n / 3;
        }
        else if (n % 3 == 1)
        {
            c1 = n / 3;
            c1++;
            c2 = n / 3;
        }
        else if (n % 3 == 2)
        {
            c1 = n / 3;
            c2 = n / 3;
            c2++;
        }
        cout << c1 << " " << c2 << endl;
    }

    return 0;
}
