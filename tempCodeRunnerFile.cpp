#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
    ll n, q;
    cin >> n >> q;
    // vector<ll> arr(n);
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr[i] = x;
    }
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int flag = 0;
    ll store;
    for (ll i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            ll index, x;
            cin >> index >> x;
            if (flag == 0)
            {
                sum = sum - arr[index - 1] + x;
                arr[index - 1] = x;
            }
            else
            {
                sum = sum - store + x;
                arr[index - 1] = store;
                flag = 0;
            }
            cout << sum << endl;
        }
        else
        {
            ll temp;
            flag = 1;
            cin >> temp;
            store = temp;
            sum = temp * n;
            //  fill(arr, arr + n, temp);

            cout << sum << endl;
        }
    }
    return 0;
}