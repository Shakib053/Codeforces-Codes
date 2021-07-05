#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
    string s;
    cin>>s;
    int c=0,sum=0,ans=0;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]=='1' || s[i-1]=='1') && c==0)
        c=1;
        if(c==1 && s[i]=='0')
        sum++;
        else if(s[i]=='1' && c==1 && sum>0)
        {
          ans=ans+sum;
          c=0;
          sum=0;
        }
      
    }
    cout<<ans<<endl;
   
}


return 0;
}
