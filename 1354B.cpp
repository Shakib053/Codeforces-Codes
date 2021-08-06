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
        string s;
        cin >> s;
        int one = 0, two = 0, three = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                one++;
            else if (s[i] == '2')
                two++;
            else if (s[i] == '3')
            {
                three++;
            }
        }
        if (one == 0 || two == 0 || three == 0)
            cout << 0 << endl;
        else
        {
            int n = s.size();
            int a[3] = {-n, -n, -n};
            int ans = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                a[s[i] - '1'] = i;
                ans = min(ans, i - min(a[0], min(a[1], a[2])));
            }
            cout << ans + 1 << endl;
        }
    }
    return 0;
}
