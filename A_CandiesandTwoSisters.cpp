#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
int t;
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    if(n%2==0)
    cout<<(n/2)-1<<endl;
    else
    cout<<n/2<<endl;
}



return 0;
}

