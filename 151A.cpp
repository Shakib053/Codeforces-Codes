#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int amt=k*l;
int frst=amt/nl;
int lebu=c*d;
int lobon=p/np;
int a[3];
a[0]=frst;
a[1]=lebu;
a[2]=lobon;
sort(a,a+3);
cout<<a[0]/n<<endl;
return 0;
}
