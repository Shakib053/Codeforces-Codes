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
 int a[n];
 set<int>st;
 for(int i=0;i<n;i++)
 {
cin>>a[i];
st.insert(a[i]);
 }
 sort(a,a+n);
//  for(int i=0;i<n;i++)
//  cout<<a[i]<<" ";
//  cout<<endl;
int mini=0;
int ans=1;
for(int i=0;i<n-1;i++)
 {
 if(a[i]==a[i+1])
 {
     ans++;
  
 }
 else
 ans=1;
 mini=max(mini,ans);
//  if(a[i]!=a[i+1])
//  ans=1;

 }
 n=n/2;
 int s=st.size();
//  cout<<mini<<" "<<n<<" "<<s<<" "<<endl;
 int check1=min(s,mini-1);
 int check2=min(s-1,mini);
 cout<<max(check1,check2)<<endl;

}

 
return 0;
}
