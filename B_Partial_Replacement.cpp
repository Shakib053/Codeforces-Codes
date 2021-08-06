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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int first, last;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*')
            {
                first = i;
                break;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '*')
            {
                last = i;
                break;
            }
        }
        int cnt = 1;
        while (first < last)
        {
            if (s[first] == '*')
            {
                cnt++;
            }
            int check = min(first + k, n - 1);
            while (s[check] != '*')
            {
                check--;
            }
            first = check;
        }

        cout << cnt << endl;
    }

    return 0;
}
