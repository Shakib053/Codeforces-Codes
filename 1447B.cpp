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
        int a[n][m];
        int sum = 0;
        int cnt = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] <= 0)
                    cnt++;
                v.push_back(abs(a[i][j]));
                sum = sum + abs(a[i][j]);
            }
        }
        if (cnt % 2 == 0)
            cout << sum << endl;
        else
        {
            sort(v.begin(), v.end());
            cout << sum - 2 * v[0] << endl;
        }
    }

    return 0;
}
