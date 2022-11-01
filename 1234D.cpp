#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    int q;
    cin >> q;
    vector<set<int>> vs(150);

    for (int i = 0; i < n; i++)
    {
        vs[s[i]].insert(i + 1);
    }

    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        if (a == 2)
        {
            int x, y;
            cin >> x >> y;
            int ans = 0;

            for (int j = 0; j < 26; j++)
            {
                if (*vs[j + 'a'].lower_bound(x) >= x && *vs[j + 'a'].lower_bound(x) <= y)
                    ans++;
            }
            cout << ans << endl;
        }
        else
        {
            int index;
            char ch;
            cin >> index >> ch;
            vs[s[index - 1]].erase(index);
            s[index - 1] = ch;
            vs[ch].insert(index);
        }
    }
    return 0;
}