#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    int q;
    cin >> q;
    vector<set<int>> vs(150);

    for (int i = 0; i < n; i++)
    {
        vs[s[i]].insert(i + 1);
    }

    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        if (a == 2)
        {
            int x, y;
            cin >> x >> y;
            int ans = 0;

            for (int j = 0; j < 26; j++)
            {
                if (*vs[j + 'a'].lower_bound(x) >= x && *vs[j + 'a'].lower_bound(x) <= y)
                    ans++;
            }
            cout << ans << endl;
        }
        else
        {
            int index;
            char ch;
            cin >> index >> ch;
            vs[s[index - 1]].erase(index);
            s[index - 1] = ch;
            vs[ch].insert(index);
        }
    }
    return 0;
}

//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <set>
//#include <vector>
// using namespace std;
// int main(){
//  ios::sync_with_stdio(0);
//  cin.tie(0);cout.tie(0);
//  string s;
//  cin>>s;
//  int a,n=0;
//  cin>>a;
//  vector<set<int>>v(150);
//
//  for(int b=0;b<s.size();b++){
//    v[s[b]].insert(b+1);
//  }
//
//  while(a--){
//    int b;
//    cin>>b;
//    if(b==1){
//      int d;
//      char c;
//      cin>>d>>c;
//      v[s[d-1]].erase(d);
//      s[d-1]=c;
//      v[c].insert(d);
//    }
//    else{
//      int d,c,n=0;
//      cin>>d>>c;
//      set<int>st;
//      st = v['a'];
//      for(auto it = st.begin();it!=st.end();it++)
//        cout<<*it<<" ";
//      cout<<endl;
//      for(int e=0;e<26;e++){
//        if(*v[e+'a'].lower_bound(d)<=c && *v[e+'a'].lower_bound(d)>=d) {
//          n++;
//        }
//      }
//      cout<<n<<endl;
//    }
//  }
//  return 0;
//}