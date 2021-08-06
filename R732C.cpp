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
        int N = 1000005;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int fo[1000005] = {0};
        int fe[1000005] = {0};
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                fe[a[i]]++;
            }
            else
            {
                fo[a[i]]++;
            }
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                fe[a[i]]--;
            }
            else
            {
                fo[a[i]]--;
            }
        }
        int flag = 0;
        for (int i = 1; i < N; i++)
        {
            if (fo[i] != 0 || fe[i] != 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
