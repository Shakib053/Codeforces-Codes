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
        ll n, k;
        cin >> n >> k;
        ll number = n / 2;
        ll sum;
        ll odd = 1;
        if (k == 1)
        {
            if (n % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else if (k % 2 == 1)
        {
            if (n % 2 == 1)
            {
                if (number < k)
                {
                    cout << "NO\n";
                }
                else
                {
                    sum = (k * k);
                    if (sum <= n)
                        cout << "YES\n";
                    else
                        cout << "NO\n";
                }
            }

            else
                cout << "NO\n";
        }
        else if (k % 2 == 0)
        {
            if (n % 2 == 0)
            {
                if (number < k)
                {
                    cout << "NO\n";
                }
                else
                {
                    sum = (k * k);
                    if (sum <= n)
                        cout << "YES\n";
                    else
                        cout << "NO\n";
                }
            }
            else
                cout << "NO\n";
        }
    }
    return 0;
}
