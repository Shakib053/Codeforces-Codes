#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
string s;
cin>>s;
if(s[0]=='a' && (s[1]=='1' || s[1]=='8'))
cout<<3<<endl;
else if(s[0]=='h' && (s[1]=='1' || s[1]=='8'))
cout<<3<<endl;
else if(s[0]=='a' && (s[1]=='2'
|| s[1]=='3' || s[1]=='4' || s[1]=='5'
|| s[1]=='6' || s[1]=='7'))
cout<<5<<endl;
else if(s[1]=='1' && (s[0]=='b'
|| s[0]=='c' || s[0]=='d' || s[0]=='e'
|| s[0]=='f' || s[0]=='g'))
cout<<5<<endl;
else if(s[1]=='8' && (s[0]=='b'
|| s[0]=='c' || s[0]=='d' || s[0]=='e'
|| s[0]=='f' || s[0]=='g'))
cout<<5<<endl;
else if(s[0]=='h' && (s[1]=='2'
|| s[1]=='3' || s[1]=='4' || s[1]=='5'
|| s[1]=='6' || s[1]=='7'))
cout<<5<<endl;
else 
cout<<8<<endl;
return 0;
}
