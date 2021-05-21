#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {  
     
      int n;
      string s;
      cin>>n>>s;
      int ans=0;
      for(int i=0;i<n;i++)
      {
          if(s[i]=='0')
          ans++;
      }
      if(ans==0)
      cout<<"DRAW\n";
	  else if(ans%2!=0 && ans>=3)
      cout<<"ALICE\n";
	  else 
      cout<<"BOB\n";
    }
    return 0;
}
