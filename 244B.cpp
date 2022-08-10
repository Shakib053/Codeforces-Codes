#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, t, c;
    cin >> n >> t >> c;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    v.push_back(1000000008);
    long long ans = 0;
    long long l = 0;
    for (int i = 0; i <= n; i++)
    {
        if (v[i] > t)
        {

            if (l >= c)
                ans = ans + (l - c + 1);
            l = 0;
        }
        else
        {
            l++;
        }
    }
    cout << ans << endl;
    return 0;
}