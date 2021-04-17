#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
     string s,s1;
     cin>>s>>s1;
     int n=s.size(),c=0;
     for(int i=0,j=n-1;i<n,j>=0;j--,i++)
     {
       if(s[i]==s1[j])
       c++;
     }
     if(c==n)
     cout<<"YES\n";
     else
     cout<<"NO\n";
    return 0;
}
