#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int p=0,n=0;
    int a=s.size();
    for(int i=0;i<a;i++)
    {
      if(s[i]=='+')
      p++;
      else 
      n++;
    }
    for(int i=a-p-1,j=0;i<a;i++,j++)
    {   
        if(i<a)
        cout<<s[i];
        if(j<p)
        cout<<s[j];
    }
    cout<<endl;
    return 0;
}