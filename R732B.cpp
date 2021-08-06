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
        int n, m;
        cin >> n >> m;
        int sum[m] = {0};
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                sum[j] = sum[j] + s[j];
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                sum[j] = sum[j] - s[j];
            }
        }
        for (int j = 0; j < m; j++)
        {
            cout << (char)(sum[j]);
            // sum[j] = 0;
        }
        cout << endl;
    }

    return 0;
}
