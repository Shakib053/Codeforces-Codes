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
        string s, s1;
        cin >> s;
        s1 = s;
        sort(s1.begin(), s1.end());
        int flag = 0;
        int check = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] - 'a' != i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            int index;
            int n = s.size();
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'a')
                {
                    index = i;
                    break;
                }
            }
            for (int i = index; i < s.size() - 1; i++)
            {
                if (s[i] > s[i + 1])
                {
                    check = 1;
                    break;
                }
            }
            for (int i = index; i > 0; i--)
            {
                if (s[i] >= s[i - 1])
                {
                    check = 1;
                    break;
                }
            }
            if (check == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}
