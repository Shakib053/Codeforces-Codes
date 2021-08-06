#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
string LCS(string X, string Y, int m, int n)
{
    int maxlen = 0;
    int endingIndex = m;
    int lookup[m + 1][n + 1];
    memset(lookup, 0, sizeof(lookup));
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
                if (lookup[i][j] > maxlen)
                {
                    maxlen = lookup[i][j];
                    endingIndex = i;
                }
            }
        }
    }
    return X.substr(endingIndex - maxlen, maxlen);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2, X, Y;
        cin >> s1 >> s2;
        int a = s1.size();
        int b = s2.size();
        X = s1;
        Y = s2;
        string str = LCS(X, Y, a, b);
        int cmmn = str.size();
        cout << a + b - 2 * cmmn << endl;
    }

    return 0;
}
