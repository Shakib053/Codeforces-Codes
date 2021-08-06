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
        int xa, ya, xb, yb, xf, yf;
        cin >> xa >> ya >> xb >> yb >> xf >> yf;
        int ans;
        int maxi, mini;
        maxi = max(ya, yb);
        mini = min(ya, yb);
        int maxix = max(xa, xb);
        int minix = min(xa, xb);
        if (xa == xb)
        {

            if (yf > mini && yf < maxi && xa == xf)
                ans = abs(ya - yb) + 2;
            else
                ans = abs(ya - yb);
        }
        else if (ya == yb)
        {
            if (xf > minix && xf < maxix && ya == yf)
                ans = abs(xa - xb) + 2;
            else
                ans = abs(xa - xb);
        }
        else
            ans = abs(xa - xb) + abs(ya - yb);
        cout << ans << endl;
    }

    return 0;
}
