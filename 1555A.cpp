#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;

int main()
{
    un ll t;
    cin >> t;
    while (t--)
    {
        un ll n;
        cin >> n;
        un ll ans;
        if (n <= 6)
        {
            ans = 15;
        }
        else if (n <= 8 && n > 6)
            ans = 20;
        else if (n <= 10 && n > 8)
        {
            ans = 25;
        }
        else if (n % 6 == 0)
            ans = (n / 6) * 15;
        else if (n % 8 == 0)
            ans = 20 * (n / 8);
        else if (n % 10 == 0)
            ans = 25 * (n / 10);
        else
        {
            un ll rem = n % 10;
            un ll cnt = n / 10;
            ans = cnt * 25;
            if (rem <= 2)
                ans = ans + 5;
            else if (rem == 4 || rem == 3)
                ans = ans + 10;
            else if (rem == 5 || rem == 6)
                ans = ans + 15;
            else if (rem == 7 || rem == 8)
                ans = ans + 20;
            else
                ans = ans + 25;
        }
        cout << ans << endl;
    }
    return 0;
}
