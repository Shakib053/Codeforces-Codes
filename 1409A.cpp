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
    ll int a,b,x;
    cin>>a>>b;
    ll int z=abs(a-b);
    if(z%10==0)
    cout<<z/10<<endl;
    else
    cout<<(z/10)+1<<endl;
 }
 
return 0;
}

