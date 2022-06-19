#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        string s;
        cin >> s;
        if (mp.count(s) == 0)
        {
            cout << "OK" << endl;
            mp[s]++;
        }
        else
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }
    return 0;
}
