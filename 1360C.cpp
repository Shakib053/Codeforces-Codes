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
        cin >> n;
        int a[n];
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd % 2 == 0 && even % 2 == 0)
            cout << "YES\n";
        else
        {
            sort(a, a + n);
            int flag = 0;
            for (int i = 1; i < n; i++)
            {
                if (a[i] - a[i - 1] == 1)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                cout << "YES\n";
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
