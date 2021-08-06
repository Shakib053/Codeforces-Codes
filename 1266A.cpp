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
        string s;
        cin >> s;
        int n = s.size();
        int sum = 0;
        int zero = 0, six = 0, two = 0, four = 0, eight = 0;
        for (int i = 0; i < n; i++)
        {
            char ch = s[i];
            if (s[i] == '0')
                zero++;
            else if (s[i] == '2')
                two++;
            else if (s[i] == '4')
            {
                four++;
            }
            else if (s[i] == '6')
            {
                six++;
            }
            else if (s[i] == '8')
                eight++;
            sum = sum + (int)(ch)-48;
        }
        if (sum % 3 == 0)
        {
            int flag = 0;
            if (zero >= 2)
                flag = 1;
            else if (two > 0 && zero > 0)
                flag = 1;
            else if (four > 0 && zero > 0)
            {
                flag = 1;
            }
            else if (six > 0 && zero > 0)
                flag = 1;
            else if (eight > 0 && zero > 0)
                flag = 1;
            if (flag == 1)
                cout << "red\n";
            else
                cout << "cyan\n";
        }

        else
            cout << "cyan\n";
    }

    return 0;
}
