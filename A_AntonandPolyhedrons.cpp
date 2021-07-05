#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
int n;
cin>>n;
string s;
int ans=0;
while (n--)
{
    cin>>s;
    if(s=="Tetrahedron" )
    ans=ans+4;
    if(s=="Cube" )
    ans=ans+6;
    if(s=="Octahedron" )
    ans=ans+8;
    if(s=="Dodecahedron" )
    ans=ans+12;
    if(s=="Icosahedron" )
    ans=ans+20;

}
cout<<ans<<endl;

return 0;
}

