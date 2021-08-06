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
        int a[n + 5][5];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin >> a[i][j];
            }
        }
        int gold = 0;
        for (int i = 1; i < n; i++)
        {
            cnt = 0;
            for (int j = 0; j < 5; j++)
            {
                if (a[i][j] < a[gold][j])
                    cnt++;
            }
            if (cnt >= 3)
                gold = i;
        }
        int index = -1;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {

            if (i != gold)
            {
                cnt = 0;
                for (int j = 0; j < 5; j++)
                {
                    if (a[i][j] < a[gold][j])
                        cnt++;
                }
                if (cnt >= 3)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
            cout << gold + 1 << endl;
        else
            cout << index << endl;
    }
    return 0;
}
