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
        string s;
        cin >> s;
        int n = s.size();
        int flag = 0, cnt = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                flag = 1;
            else if (s[i] != '0' && flag == 1)
            {
                cnt++;
                flag = 0;
            }
        }
        if (s[n - 1] == '0')
            cnt++;
        int ans = min(cnt, 2);
        cout << ans << endl;
    }
    return 0;
}