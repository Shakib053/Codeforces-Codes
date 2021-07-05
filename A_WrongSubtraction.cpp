#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    ll int n;
    int k;
    cin>>n>>k;
    while (k--)
    {
        if(n%10==0)
        n=n/10;
        else
        n=n-1;
    }
    cout<<n<<endl;
    return 0;
}