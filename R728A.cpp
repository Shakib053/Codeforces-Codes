#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
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
{
    vector<int>v,v1;
 for(int i=2;i<=n;i=i+2)
 {  
     v.push_back(i);
     v1.push_back(i-1);

 }
 for(int i=0;i<v1.size();i++)
 {
     cout<<v[i]<<" "<<v1[i]<<" ";
 }
  cout<<endl;

}
else
{
    for(int i=2;i<n-2;i=i+2)
 {  
    cout<<i<<" "<<i-1<<" ";

 }
 cout<<n<<" "<<n-2<<" "<<n-1;
 cout<<endl;
}

}

 
return 0;
}
