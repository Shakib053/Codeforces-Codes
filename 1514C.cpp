#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
ll int gcd(ll int a,ll int b){
 if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{   
ll int n;
cin>>n;
unsigned ll int sum=1;
vector<unsigned ll int> v;
for(ll int i=1;i<n;i++)
{
  if(gcd(i,n)==1)
  { 
     v.push_back(i);
     sum=(sum*i)%n;
  }
}
if(sum!=1)
v.pop_back();

cout<<v.size()<<endl;
for(ll int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
return 0;

}

