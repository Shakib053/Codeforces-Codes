#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
int cnt=0;
int n,i=1;
while (1)
{
    t=t-(i*(i+1)/2);
    cnt++;
    i++;
    if(t<(i*(i+1)/2))
    {
        cout<<cnt<<endl;
        break;
    }
}



return 0;
}
