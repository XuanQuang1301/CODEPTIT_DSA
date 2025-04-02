#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> s;
        s.insert(1);
        n--;
        while(n){
            int tmp = *s.begin();
            s.erase(s.begin());
            s.insert(tmp * 2);
            s.insert(tmp * 3);
            s.insert(tmp * 5);
            n--;
        }
        cout << *s.begin() << endl;
    }
}