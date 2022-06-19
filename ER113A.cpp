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
        string s;
        cin >> s;
        int a1 = 0, b1 = 0;
        set<char> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
            if (s[i] == 'a')
                a1++;
            else
                b1++;
        }
        int flag = 0;
        int index;
        if (a1 == b1)
        {
            cout << 1 << " " << n << endl;
            continue;
        }
        else if (st.size() == 1)
            flag = 0;
        else
        {

            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] != s[i + 1])
                {
                    index = i;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
            cout << -1 << " " << -1 << endl;
        else
            cout << index + 1 << " " << index + 2 << endl;
    }
    return 0;
}