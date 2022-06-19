#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        // int prime = [ 1, 4, 6, 8 ];
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9')
            {
                cout << 1 << endl;
                cout << s[i] << endl;
                flag = 1;
                break;
            }
        }
    }
    return 0;
}