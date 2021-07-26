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
        string s;
        cin >> s;
        int w1 = 0, w2 = 0;
        int ans1 = 10, ans2 = 10;
        for (int i = 0; i < s.size(); i++)
        {
            int rem = (10 - i + 1) / 2;
            if (w1 > w2 + rem)
            {
                ans1 = i;
                break;
            }
            if (i % 2 == 0)
            {
                if (s[i] == '1' || s[i] == '?')
                    w1++;
            }
            else
            {
                if (s[i] == '1')
                    w2++;
            }
        }
        w1 = 0, w2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int left = (10 - i) / 2;
            if (w2 > w1 + left)
            {
                ans2 = i;
                break;
            }
            if (i % 2 == 1)
            {
                if (s[i] == '1' || s[i] == '?')
                    w2++;
            }
            else
            {
                if (s[i] == '1')
                    w1++;
            }
        }
        int ans = min(ans1, ans2);
        cout << ans << endl;
    }

    return 0;
}
