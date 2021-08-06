#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
    char a[6][6];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 4; i < 6; i++)
    {
        for (int j = 4; j < 6; j++)
        {
            a[i][j] = '0';
        }
    }
    int flag = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] + a[i + 1][j + 1] + a[i + 2][j + 2] == 286 ||
                a[i][j] + a[i][j + 1] + a[i][j + 2] == 286 ||
                a[i][j] + a[i + 1][j] + a[i + 2][j] == 286 || a[i + 2][j] + a[i + 1][j + 1] + a[i][j + 2] == 286)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}