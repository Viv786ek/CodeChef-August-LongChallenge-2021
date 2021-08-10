#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t ; cin >> t;
    while(t--){
        int c1=0,c2=0;
        for(int i=0;i<3;i++){
            int n; cin >> n;
            c1+=n;
        }
        for(int i=0;i<3;i++){
            int n; cin >> n;
            c2+=n;
        }
        if(c1 > c2) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
    return 0;
}
