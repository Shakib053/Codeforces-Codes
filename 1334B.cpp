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
        int n, x;
        cin >> n >> x;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int cnt = 0;
        sort(a, a + n);
        ll sum = 0;
        ll avg = a[n - 1];
        int flag = 0;
        if (avg < x)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            
            sum = sum + a[i];
            cnt++;
            avg = sum / cnt;
            if (avg < x)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cnt--;
        cout << cnt << endl;
    }
    return 0;
}
