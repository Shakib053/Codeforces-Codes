#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int ans = 0;
        int mini = INT_MAX;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] > mini)
                ans++;
            mini = min(mini, v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}