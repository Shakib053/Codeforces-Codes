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
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int m = 0;
        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            m = m + abs(a[i] - b[i]);
            if (a[i] > b[i])
            {
                int c1 = a[i] - b[i];
                while (c1--)
                {
                    v1.push_back(i + 1);
                }
            }
            if (a[i] < b[i])
            {
                int c2 = b[i] - a[i];
                while (c2--)
                {

                    v2.push_back(i + 1);
                }
            }
        }
        if (v1.size() != v2.size())
            cout << -1 << endl;
        else
        {

            cout << v1.size() << endl;
            for (int i = 0; i < v2.size(); i++)
            {
                cout << v1[i] << " " << v2[i] << endl;
            }
        }
    }

    return 0;
}
