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
        ll n;
        cin >> n;
        vector<int> v;
        while (n > 0)
        {
            ll x = n % 10;
            n = n / 10;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        ll size = v.size();
        cout << v[size - 1] << endl;
    }

    return 0;
}
