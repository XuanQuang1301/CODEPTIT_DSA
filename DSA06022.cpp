#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> s;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            s.insert(x);
        }
        if(s.size() < 2){
            cout << -1 << endl;
        }
        else{
            auto i = s.begin();
            cout << *i << " ";
            i++;
            cout << *i << endl;
        }
    }
}