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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s1 = s;
        sort(s1.begin(), s1.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s1[i])
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
