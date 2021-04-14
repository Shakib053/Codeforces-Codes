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
     set<char> ss;
     for(int i=0;i<s.size();i++)
     {
         ss.insert(s[i]);
     }
     set<char> :: iterator it;
     int c=0;
     for(it=ss.begin();it!=ss.end();it++)
     c++;
     if(c%2==0)
     cout<<"CHAT WITH HER!\n";
     else
     cout<<"IGNORE HIM!\n";
    return 0;
}
