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
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int ans = 0;
        ans = n * a;
        if (b > 0)
            ans = ans + (n * b);
        else
        {
            int cnt = 1;
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i] != s[i + 1])
                    cnt++;
            }
            ans = ans + ((cnt / 2) + 1) * b;
        }
        cout << ans << endl;
    }

    return 0;
}
