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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 1;
        while (1)
        {
            if (is_sorted(a, a + n) == 1)
                break;

            if (ans % 2 == 0)
            {

                for (int j = 0; j < n - 1; j++)
                {

                    if (a[j] > a[j + 1] && (j + 1) % 2 == 0)
                    {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
            else
            {
                for (int j = 0; j < n - 1; j++)
                {

                    if (a[j] > a[j + 1] && (j + 1) % 2 == 1)
                    {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
            ans++;
        }

        cout << ans - 1 << endl;
    }
    return 0;
}
