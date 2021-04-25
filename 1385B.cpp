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
int n;
cin>>n;
int a[2*n];
for(int i=0;i<2*n;i++)
cin>>a[i];
unordered_set<int>s;
vector<int>ans;
for(int i=0;i<2*n;i++)
{
    int x=a[i];
   if(s.count(x)==1)
   {
     ans.push_back(x);
     s.erase(x);
   }
   else 
   s.insert(x);
}
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
cout<<endl;
    
}

 
return 0;
}

