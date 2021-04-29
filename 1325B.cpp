#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
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
    set<int>s;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
     // if(s.count(x)==0)
      s.insert(x);
    }
    cout<<s.size()<<endl;
   
}


return 0;
}
