#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
    int n,t;
    string s,s1;
    vector<string> v;
    cin>>n>>t;
    cin>>s;
    while (t--)
    {
      int c=0;
      for(int i=0;i<n-1;i=i+2)
    {   
        
        if(s[i]=='B' && s[i+1]=='G')
        {
        s[i]='G';
        s[i+1]='B';
        }
        else
        {  
            //s[i]='G';
            //s[i+1]='B';
            i--;
        }
    }
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
    cout<<endl;
   

   
    return 0;
}
