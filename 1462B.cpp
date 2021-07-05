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
while (t--)
{ 
    int n;
    cin>>n;
    string s;
    cin>>s;
    int t=0;
    for(int i=0;i<=4;i++)
    {   
       string s1=s.substr(0,i);
       string s2=s.substr(n-4+i,4-i);
       if(s1+s2=="2020")
       {
           t=1;
           break;
       }

    }
    if(t==1)
    cout<<"YES\n";
    else
    cout<<"NO\n";
   
}


return 0;
}
