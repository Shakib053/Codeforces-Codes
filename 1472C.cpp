#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll score[n] = {0};
        for (ll i = n - 1; i >= 0; i--)
        {
            score[i] = score[i] + a[i];
            ll check = a[i] + i;
            if (check < n)
                score[i] = score[i] + score[check];
        }
        // for (ll i = 0; i < n; i++)
        //     cout << score[i] << " ";
        // cout << endl;
        sort(score, score + n);
        // for (ll i = 0; i < n; i++)
        //     cout << score[i] << " ";
        // cout << endl;
        cout << score[n - 1] << endl;
    }

    return 0;
}
