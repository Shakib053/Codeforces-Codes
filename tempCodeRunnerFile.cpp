#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>
#include <vector>

using namespace std;

int main()
{
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
            set<int> st;

            for (int j = 0; j < 26; j++)
            {
                st = vs[j + 'a'];
                set<int>::iterator it1;
                it1 = st.lower_bound(x);
                if (*it1 >= x && *it1 <= y)
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
