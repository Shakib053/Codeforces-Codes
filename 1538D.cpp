#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
#define M 10000000
bool marked[M];
bool prime(ll n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  if(marked[n]==false) return true;
  else return false;

}

void sieve(int n) {
  for (ll i = 3; i * i <= n; i += 2) {
    if (marked[i] == false) { // i is a prime
      for (ll j = i * i; j <= n; j = j + i) {
        marked[j] = true;
      }
    }
  }
}

 
int main()
{
int t;
cin>>t;
sieve(10000000);
vector<ll> store;
for(ll i=2;i<M;i++){
            if(prime(i)==true){
                store.push_back(i);
            }
        }
while (t--)
{
 ll a,b,k;
 cin>>a>>b>>k;
 if(k==1)
 {
     if(a==1 && b==1)
     {
         cout<<"NO\n";
         continue;
     }
     if(a==b)
     {
         cout<<"NO\n";
         continue;
     }
     if(a%b==0 || b%a==0)
     {
         cout<<"YES\n";
         continue;
     }
     else
     {
         cout<<"NO\n";
         continue;
     }
 }
 else
 {
  ll divisor1=0;
 while (a%2==0)
 {
    a=a/2;
    divisor1++;
 }
 for(ll i=0;i<store.size() && store[i]<=sqrt(a);i++)
 {
     while (a%store[i]==0)
     {
         divisor1++;
         a=a/store[i];
     }
     
     
 }
 if(a>2)
     divisor1++;
 ll divisor2=0;
 while (b%2==0)
 {
    b=b/2;
    divisor2++;
 }
 for(ll i=0;i<store.size() && store[i]<=sqrt(b);i++)
 {
     while (b%store[i]==0)
     {
         divisor2++;
         b=b/store[i];
     }
     
 }
 if(b>2)
     divisor2++;
 if(k<=divisor1+divisor2)
 cout<<"YES\n";
 else
 cout<<"NO\n";

 }
 


}
return 0;
}
