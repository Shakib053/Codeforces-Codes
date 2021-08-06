#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
    char heading[200];
    char s2[200];
    scanf("%[^\n]%*c", heading);
    scanf("%[^\n]%*c", s2);
    int flag = 0;
    string ans = "";
    int size1 = 0, size2 = 0;
    for (int i = 0; i < 200; i++)
    {
        if (heading[i] != '\0')
            size1++;
        else
            break;
    }
    for (int i = 0; i < 200; i++)
    {
        if (s2[i] != '\0')
            size2++;
        else
            break;
    }
    // cout << size1 << " " << size2 << endl;
    for (int i = 0; i < size2; i++)
    {
        for (int j = 0; j < size1; j++)
        {

            if (s2[i] == heading[j])
            {
                // cout << s2[i];
                ans = ans + heading[j];
                break;
            }
        }
        if (flag == 1)
            break;
    }
    int check = 0;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] != s2[i])
        {
            check = 1;
            break;
        }
    }
    // cout << s2 << endl;
    // cout << ans << endl;
    // cout << ans.size() << endl;
    if (check == 1 || ans.size() != size2)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}
