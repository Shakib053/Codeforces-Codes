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
        char ans[n][n];
        int win = 0, draw = 0;
        set<int> st, st2;
        for (int i = 0; i < n; i++)
        {
            draw = draw + (s[i] == '2');
            if (s[i] == '2')
            {
                win++;
                st.insert(i);
            }
            else
                st2.insert(i);
        }
        if (draw <= 2 && draw)
        {
            cout << "NO\n";
            // cout << draw << endl;
        }
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                        ans[i][j] = 'X';
                    else
                        ans[i][j] = '0';
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (ans[i][j] == '0')
                    {
                        if (st2.count(i) == 1)
                        {
                            ans[i][j] = '=';
                            ans[j][i] = '=';
                        }
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (win > 0 && ans[i][j] == '0')
                    {
                        if (st.count(i) == 1)
                        {
                            ans[i][j] = '+';
                            ans[j][i] = '-';
                            st.erase(i);
                            win--;
                        }
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (ans[i][j] == '0')
                        ans[i][j] = '=';
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << ans[i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}