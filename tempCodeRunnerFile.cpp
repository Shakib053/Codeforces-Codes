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
        vector<vector<int>> v(n);
        vector<vector<int>> ans(n);
        int j;
        for (int i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                v[i].push_back(x);
            }
            sort(v[i].begin(), v[i].end());
        }

        while (m--)
        {
            int mini = INT_MAX;
            int index = INT_MIN;
            for (j = 0; j < n; j++)
            {
                if (v[j][0] < mini)
                {
                    mini = v[j][0];
                    index = j;
                }
            }
            for (j = 0; j < n; j++)
            {
                if (j == index)
                {
                    ans[j].push_back(mini);
                    v[j].erase(v[j].begin());
                }
                else
                {
                    ans[j].push_back(v[j].size() - 1);
                    v[j].pop_back();
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k < m; k++)
            {
                cout << ans[i][k] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
