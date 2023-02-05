// #include <bits/stdc++.h>
// #define ll long long int
// #define un unsigned
// #define mod 1000000007
// using namespace std;
// int main()
// {
//     ll n, k;
//     cin >> n >> k;
//     ll arr[n + 2];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     arr[n] = n + 2;
//     arr[n + 1] = n + 2;
//     // arr[i + 2] = n + 2;
//     if (k >= n)
//     {
//         cout << n << endl;
//     }
//     else
//     {
//         long long cnt = 0;
//         int ans = arr[0];
//         for (int i = 1; i < n; i++)
//         {
//             if (ans < arr[i])
//             {

//                 cnt = 1;
//                 ans = arr[i];
//             }
//             else
//             {
//                 cnt++;
//             }

//             if (cnt >= k)
//             {
//                 break;
//             }
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int temp1 = 3;
    int temp2 = 16;
    int sum = (temp1 ^ temp2);
    cout << "sum  " << sum << endl;
    int carry = temp1 & temp2;
    cout << "carry " << (carry << 1) << endl;
    // cout << temp2 << endl;
    return 0;
}