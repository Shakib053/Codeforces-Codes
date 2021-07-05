#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    int t,a,b,n,m,c;
    cin>>t;
    int x=t+1;
    int i=1;
    while (t--)
    {
      cin>>a>>b;
      if(i==1)
      {
        n=a+b;
        m=n;
        i++;
      }   
      else
      {
          a=n-a;
          n=a+b;
          c=max(m,n);
          m=c;
          i++;
      }
      if(i==x)
      break;
    }
    cout<<c<<endl;
    return 0;
}