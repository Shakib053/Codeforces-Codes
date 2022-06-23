#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<string, int> mp, mp_ans;
    vector<string> names;
    vector<int> scores;
    while (t--)
    {
        string s;
        int score;
        cin >> s >> score;
        names.push_back(s);
        scores.push_back(score);
        if (mp.count(s) == 0)
        {
            mp[s] = score;
        }
        else
        {
            mp[s] = mp[s] + score;
        }
    }
    string ans;
    int maxi = -1;
    // cout << "----------------------\n";
    for (auto i : mp)
    {
        // cout << i.first << " " << i.second << endl;
        if (i.second > maxi)
            maxi = i.second;
    }
    for (int i = 0; i < names.size(); i++)
    {
        if (mp[names[i]] == maxi)
        {
            mp_ans[names[i]] = mp_ans[names[i]] + scores[i];
            if (mp_ans[names[i]] >= maxi)
            {
                ans = names[i];
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
