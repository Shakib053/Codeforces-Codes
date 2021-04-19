#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   

string s;
getline(cin,s);
sort(s.begin(),s.end());
int c=0;
for(int i=0;i<s.size();i++)
{   
    if(s[i]>=97 && s[i]<=122 && s[i]!=s[i+1])
    {
        c++;
        
    }
   
    
}
cout<<c<<endl;
return 0;

}

