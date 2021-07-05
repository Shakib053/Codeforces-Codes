#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
string s,t;
cin>>s>>t;
vector<int>v;
vector<int>ans(100000);
for(int i=0;i<t.length()-s.length()+1;i++){
            m=i;
    for(int j=0;j<s.length();j++){
            if(s[j]!=t[m])
                v.push_back(j);
            m++;
        }
        if(v.size()<ans.size()){
            ans=v;
 
        }
        v.clear();
    }
cout<<ans.size()<<endl;
for(auto i: ans)
cout<<i+1<<" ";

return 0;
}
