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
        cout << endl;
        int k, n, m;
        cin >> k >> n >> m;
        int a[n];
        int b[m];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int i = 0, j = 0, flag = 0;
        while (i < n || j < m)
        {
            if (i < n && j < m)
            {
                if (a[i] == 0)
                {
                    v.push_back(a[i]);
                    k++;
                    i++;
                }
                else if (b[j] == 0)
                {
                    v.push_back(b[j]);
                    k++;
                    j++;
                }
                else
                {
                    if (a[i] <= k)
                    {
                        v.push_back(a[i]);
                        i++;
                    }
                    else if (b[j] <= k)
                    {
                        v.push_back(b[j]);
                        j++;
                    }
                    else
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            else if (i < n)
            {
                if (a[i] == 0)
                {
                    v.push_back(a[i]);
                    k++;
                    i++;
                }
                else if (a[i] <= k)
                {
                    v.push_back(a[i]);
                    i++;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (j < m)
            {
                if (b[j] == 0)
                {
                    v.push_back(b[j]);
                    k++;
                    j++;
                }
                else if (b[j] <= k)
                {
                    v.push_back(b[j]);
                    j++;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            for (auto i : v)
                cout << i << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}
