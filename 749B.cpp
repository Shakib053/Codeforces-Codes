#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int a,b,c,x,y,z;
cin>>a>>x>>b>>y>>c>>z;
cout<<3<<endl;
cout<<a+b-c<<" "<<x+y-z<<endl;
cout<<a+c-b<<" "<<x+z-y<<endl;
cout<<b+c-a<<" "<<y+z-x<<endl;


 
return 0;
}

