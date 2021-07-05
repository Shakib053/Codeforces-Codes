#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int count(string a, string b, int m,int n)
{   
    if ((m == 0 && n == 0) || n == 0)
        return 1;
    if (m == 0)
        return 0;
    if(a[m-1]==b[n-1])
    return count(a,b,m-1,n-1)+ count(a,b,m-1,n);
    else
    return count(a,b,m-1,n);
}
int main()
{
string s;
cin>>s;
string s1="QAQ";
int k=s.size();
cout<<count(s,s1,k,3)<<endl;


return 0;
}
