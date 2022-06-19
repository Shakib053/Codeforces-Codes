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
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int n = s.size();
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '?')
            {
                if (s[n - i - 1] != s[i] && s[n - i - 1] != '?')
                    flag = 1;
                else
                    s[n - i - 1] = s[i];
            }
        }
        if (n % 2 == 1)
        {
            int mid = n / 2;
            if (a % 2 != 1 && b % 2 != 1)
                flag = 1;
            else if (a % 2 == 1)
            {
                if (s[mid] == '?')
                    s[mid] = '0';
                else if (s[mid] != '0')
                {
                    flag = 1;
                }
                else
                    s[mid] = '0';
            }
            else
            {
                if (s[mid] == '?')
                    s[mid] = '1';
                else if (s[mid] != '1')
                {
                    flag = 1;
                }
                else
                    s[mid] = '1';
            }
        }
        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '?')
            {
                if (s[i] == '1')
                    one++;
                else
                    zero++;
            }
        }
        one = b - one;
        zero = a - zero;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                if (zero > one)
                {
                    if (zero > 1)
                    {
                        s[i] = '0';
                        s[n - i - 1] = '0';
                        zero = zero - 2;
                    }
                }
                else
                {
                    if (one > 1)
                    {
                        s[i] = '1';
                        s[n - i - 1] = '1';
                        one = one - 2;
                    }
                }
            }
        }
        int a1 = 0, b1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                flag = 1;
            }
            if (s[i] == '?')
                flag = 1;
            if (s[i] == '1')
                b1++;
            else if (s[i] == '0')
            {
                a1++;
            }
        }
        if (a1 != a || b1 != b)
            flag = 1;
        if (flag == 0)
            cout << s << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
