#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
 ll int n,m,a,p,q;
 cin>>n>>m>>a;
 if(n%a==0)
 p=n/a;
 else
 p=n/a+1;
 if(m%a==0)
 q=m/a;
 else
 q=m/a+1;
 cout<<p*q<<endl;
return 0;
}

