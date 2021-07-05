#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
string s;
cin>>s;
int n=s.size();
int zero=0,one=0,flag,mx0=-1,mx1=-1;
for(int i=0;i<n;i++)
{
 if(s[i]=='0')
 {
   flag=0;
   one=0;
 }

 else
 {
  flag=1;
  zero=0;
 }
 
 if(s[i]=='0' && flag==0)
 {
     zero++;
     mx0=max(zero,mx0);
 }
 else if(s[i]=='1' && flag==1)
  {
     one++;
     mx1=max(one,mx1);
 }
}
// cout<<mx0<<" "<<mx1<<endl;
if(mx0>=7 || mx1>=7)
cout<<"YES\n";
else
cout<<"NO\n";
return 0;
}
