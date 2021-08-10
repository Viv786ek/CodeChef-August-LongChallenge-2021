#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
int t; cin >> t;
        while(t--){
             set<int, greater<int> > s;
            int a[4] ;
            for(int i=0;i<4;i++){
                int n ; cin>>n;
                a[i] = n;
                s.insert(n);
            }
            int l = s.size();
            if(l==4 || l==3){
               cout << 2 <<'\n';
            }
            else if(l==2){
                sort(a,a+4);
                if(a[0]==a[1]&&a[2]==a[3])cout << 2 <<'\n';
                else cout << 1 <<'\n';
            }
            else cout << 0 <<'\n';
        }
    return 0;
}
