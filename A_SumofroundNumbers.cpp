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
     vector<int>v;
     int f=10000,c=0;
     for(int i=0;i<4;i++)
     {
      if(n/f>=1)
      {
          v.push_back(n-(n%f));
          n=n%f;
          c++;
      }
      f=f/10;
      if(n>=1 && n<=9)
      {
          v.push_back(n);
          c++;
          break;
      }
     }
     cout<<c<<endl;
     for(int i=0;i<v.size();i++)
     {
         cout<<v[i]<<" ";
     }
   cout<<endl;
 }
 
 return 0;
}
