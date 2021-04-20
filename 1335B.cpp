#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
int t;
cin>>t;
while (t--)
{
    int n,a,b;
    cin>>n>>a>>b;
    vector<char> v;
    char x='a';
    for(int i=0;i<b;i++)
    {
        v.push_back(x);
        x++;
    }
  
      for(int i=0;i<a-b;i++)
    {  
        char y=v[i];
        v.push_back(y);
        
    }
    
      for(int i=0;i<n-a;i++)
    {   
        char z=v[i];
        v.push_back(z);
    }
      for(int i=0;i<v.size();i++)
    {
       cout<<v[i];
    }
    cout<<endl;
}

return 0;
}

