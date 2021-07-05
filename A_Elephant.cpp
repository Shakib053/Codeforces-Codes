#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    ll int n;
    int i=0;
    cin>>n;
    if(n>=5)
        {
          int f=n/5;
          n=n-(f*5);
          i=f;
        }
    if(n==4)
    {
        i++;
    }    
    if(n==3)
    i++;
    if(n==2)
    i++;
    if(n==1)
    i++;
    cout<<i<<endl;
    return 0;
}