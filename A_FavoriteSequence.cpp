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
     int n;
     cin>>n;
     ll int a[n];
     for(int i=1;i<=n;i++)
     {
         cin>>a[i];
     }
     vector<int> v;
     if(n%2==0){
     for(ll int i=1,j=n;i<=(n/2),j>n/2;i++,j--)
     {
         v.push_back(a[i]);
         v.push_back(a[j]);
     }
     }
     else
     {
      for(ll int i=1,j=n;i<=(n/2)+1,j>=(n/2)+1;i++,j--)
     {
         v.push_back(a[i]);
         v.push_back(a[j]);
     }
     }
     if(n%2==0){
     for(ll int i=0;i<v.size();i++)
     {
         cout<<v[i]<<" ";
     }
     }
     else
     {
         for(ll int i=0;i<v.size()-1;i++)
     {
         cout<<v[i]<<" ";
     }
     }
     cout<<endl;
 }
    
 
 
 return 0;
}

