#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int T;
  cin >> T;
  while(T--) {
    ll n, m;
    cin>>n>>m;

    vector<pair<int,int>>vp;
    for (int i=0; i < m; i++)
    {
      ll x, y;
      cin>>x>>y;
      vp.push_back({x,y});
    }

    sort(vp.begin(), vp.end(), greater<pair<int,int>>());
    
    ll lcm=1;
    ll rem=n;
    ll res=0;
    

    for (int i=0; i<m && rem>0; i++){
        ll a= vp[i].first,b=vp[i].second;
        lcm = lcm*b/__gcd(lcm,b);
        res += (rem-n/lcm)*a;
        rem= n/lcm;
    }

    cout <<res<<endl;
  }
  return 0;
}
