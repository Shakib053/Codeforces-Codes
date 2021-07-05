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
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        cnt++;
    }
    int c=1;
    vector<int>v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1' && s[i+1]=='1')
        {
        c++;
        }
        else if(i==s.size()-1 && s[i]=='1')
        {
          v.push_back(c);
          c=1;
        }
       
        else if(s[i]=='1' && s[i+1]=='0')
        {
            v.push_back(c);
            c=1;
        }
      
    }
    if(v.empty()==1)
    cout<<0<<endl;
    else
    {
    sort(v.begin(),v.end());
    int sum=0;
    if(v.size()%2!=0)
    {
    for(int i=0;i<v.size();i=i+2)
    sum=sum+v[i];
    }
    else
    {
     for(int i=1;i<v.size();i=i+2)
    sum=sum+v[i];
    }
    //for(int i=0;i<v.size();i++)
    //cout<<v[i]<<" "<<endl;
    cout<<sum<<endl;
    }
    

}


return 0;
}
