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
        string s;
        cin >> s;
        int sz = s.size();
        set<char> st;
        int arr[26] = {0};
        int ans;
        if (sz == 1)
            ans = 0;
        else
        {

            ans = 0;
            for (int i = 0; i < sz; i++)
            {
                st.insert(s[i]);
                arr[s[i] - 'a']++;
            }
            if (st.size() == sz)
                ans = sz / 2;
            else
            {
                int cnt1 = 0, cnt2 = 0;
                for (int i = 0; i < 26; i++)
                {
                    if (arr[i] != 0 && arr[i] == 1)
                    {
                        cnt1++;
                    }
                    else if (arr[i] != 0 && arr[i] > 1)
                    {
                        cnt2++;
                    }
                }

                ans = cnt1 / 2 + cnt2;
            }
        }
        cout << ans << endl;
        // for (int i = 0; i < 26; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
    }

    return 0;
}
