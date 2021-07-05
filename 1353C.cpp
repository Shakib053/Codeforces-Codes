#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while (t--){
unsigned ll int n;
cin>>n;
unsigned ll int g=8,sum=0;
for(unsigned ll int i=1;i<=n/2;i++)
{
   sum=sum+i*g;
   g=g+8;
}
cout<<sum<<endl;
    
}

 
return 0;
}

