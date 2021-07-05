#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    int k,w;
    ll int sum=0;
    ll int n;
    int i=1;
    cin>>k>>n>>w;
    while (w--)
    {
       
        sum=sum+(k*i);
        i++;
    }
    if(n>sum)
    cout<<0<<endl;
    else
    cout<<sum-n<<endl;
    return  0;
}