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
        int n;
        set<int> st;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        int ans = 0;
        while (!st.empty())
        {
            int it = *st.rbegin();
            st.erase(it);
            if (it % 2 == 0)
            {
                ans++;
                st.insert(it / 2);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
