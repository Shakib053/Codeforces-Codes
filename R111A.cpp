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
        int s;
        cin >> s;
        int ans;
        int x = sqrt(s);
        if (x * x == s)
            ans = x;
        else
            ans = x + 1;
        cout << ans << endl;
    }

    return 0;
}
