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
        ll n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int n1 = s1.size();
        int n2 = s2.size();
        int p = 0;
        int en = 0;
        for (int i = 0; i < n2; i++)
        {
            if (s2[i] == '1')
                p++;

            if (s1[i] == '1')
                en++;
        }
        if (p == 0)
        {
            cout << 0 << endl;
            continue;
        }
        else if (en == 0)
        {
            cout << p << endl;
        }
        else
        {
            int ans = 0;
            for (int i = 0; i < n2; i++)
            {
                if (s2[i] == '1' && s1[i] == '0')
                {
                    ans++;
                    s2[i] = '2';
                }
            }
            // cout << ans << endl;
            for (int i = 0; i < n2; i = i + 1)
            {
                if (s2[i] == '1')
                {
                    if (i > 0 && s1[i - 1] == '1')
                    {
                        ans++;
                        s1[i - 1] = 'a';
                    }
                    else if (i < n2 - 1 && s1[i + 1] == '1')
                    {
                        ans++;
                        s1[i + 1] = 'a';
                    }
                }
            }

            cout << ans << endl;
        }
    }
    return 0;
}
