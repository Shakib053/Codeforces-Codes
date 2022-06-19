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
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int flag = 0;
        int ans = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '0' && s2[i] == '1')
            {
                flag = 0;
                cnt = 0;
                ans = ans + 2;
            }

            else if (s1[i] == '1' && s2[i] == '0')
            {
                flag = 0;
                cnt = 0;
                ans = ans + 2;
            }
            else if (flag == 1 && s1[i] == '1' && s2[i] == '1')
            {
                flag = 0;
                cnt = 0;
                ans = ans + 2;
            }
            else if (flag == 1 && s1[i] == '0' && s2[i] == '0')
            {
                flag = 0;
                cnt = 0;
                ans = ans + 2;
            }
            else if (s1[i] == '1' && s2[i] == '1')
            {
                flag = 1;
                cnt = 0;
                // ans = ans + 2;
            }
            else if (s1[i] == '0' && s2[i] == '0')
            {
                flag = 1;
                cnt++;
                // ans = ans + 2;
            }
            if (i == n - 1 && flag == 1)
                ans = ans + cnt;
        }
        cout << ans << endl;
    }
    return 0;
}