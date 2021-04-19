#include<bits/stdc++.h>
#include<iterator>
#include<math.h>
#define ll long long
using namespace std;
int main()
{   
 
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     ll int c=0;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
    for(int i=0;i<n;i++)
     {
         if (ceil((double)sqrt(a[i])) == floor((double)sqrt(a[i]))) 
         c++;
     }
     if (c==n) {
        cout<<"NO";
    }
    else {
        cout<<"YES";
    }
   cout<<endl;
 }
 return 0;
}

