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
        int n = s.size();
        set<char> st;
        char fc;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }
        if (st.size() == 1)
        {
            cout << s << endl;
            continue;
        }
        fc = s[0];
        if (fc == '1')
        {
            for (int i = 0; i < 2 * n; i++)
            {
                if (i % 2 == 0)
                    cout << '1';
                else
                    cout << '0';
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < 2 * n; i++)
            {
                if (i % 2 == 0)
                    cout << '0';
                else
                    cout << '1';
            }
            cout << endl;
        }
    }
    return 0;
}
