#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{

 int t;
 cin>>t;
 while (t--)
 {
     unsigned ll int x,y,n,k,z;
     cin>>x>>y>>n;
     z=floor((n-y)/x);
     k=(x*z)+y;
     cout<<k<<endl;
     
 }
 
return 0;
}

