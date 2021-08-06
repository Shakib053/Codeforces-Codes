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
        int n, n1, n2;
        cin >> n;
        n1 = n / 2;
        n2 = n1 - 1;
        if (n == 1)
        {
            cout << 'x' << endl;
            continue;
        }
        if (n % 2 == 0)
        {

            for (int i = 1; i <= n1; i++)
            {

                cout << 'a';
            }
            cout << 'b';
            for (int i = 1; i <= n2; i++)
            {

                cout << 'a';
            }
        }
        else
        {
            for (int i = 1; i <= n1; i++)
            {

                cout << 'a';
            }
            cout << "bc";
            for (int i = 1; i <= n2; i++)
            {

                cout << 'a';
            }
        }

        cout << endl;
    }
    return 0;
}
