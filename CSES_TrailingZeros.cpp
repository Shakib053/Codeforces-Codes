#include <bits/stdc++.h>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
ll facto(int n)
{
    if (n < 0)
        return -1;
    int cnt = 0;
    for (int i = 5; n / i >= 1; i = i * 5)
        cnt = cnt + (n / i);
    return cnt;
}
int main()
{
    int t;
    cin >> t;
    cout << facto(t) << endl;
    return 0;
}
