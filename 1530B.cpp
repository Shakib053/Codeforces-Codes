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
        int h, w;
        cin >> h >> w;
        int ans[h + 2][w + 2] = {0};
        if (h % 2 == 1)
        {
            for (int i = 1; i <= h; i++)
            {
                for (int j = 1; j <= w; j++)
                {
                    if (i == 1 || i == h)
                    {
                        if (j % 2 == 1)
                            ans[i][j] = 1;
                        else
                            ans[i][j] = 0;
                    }
                    else if (i % 2 == 1)
                    {
                        if (j == 1 || j == w)
                            ans[i][j] = 1;
                        else
                            ans[i][j] = 0;
                    }
                    else
                    {
                        ans[i][j] = 0;
                    }
                }
            }
        }
        else if (h % 2 == 0)
        {
            for (int i = 1; i <= h; i++)
            {
                for (int j = 1; j <= w; j++)
                {
                    if (i == 1 || i == h)
                    {
                        if (j % 2 == 1)
                            ans[i][j] = 1;
                        else
                            ans[i][j] = 0;
                    }
                }
            }
            for (int i = 3; i < h; i++)
            {
                for (int j = 1; j <= w; j++)
                {
                    if (i % 2 == 0)
                    {
                        if (j == 1 || j == w)
                            ans[i][j] = 1;
                        else
                            ans[i][j] = 0;
                    }
                    else
                    {
                        ans[i][j] = 0;
                    }
                }
            }
        }

        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                cout << ans[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
