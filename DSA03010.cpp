#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        multiset<int> SE;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            SE.insert(x);
        }
        long long sum = 0;
        while(SE.size() > 1){
            long long tmp = 0;
            auto x = SE.begin();
            tmp += *x;
            SE.erase(x);
            auto y = SE.begin();
            tmp += *y;
            SE.erase(y);
            sum += tmp;
            SE.insert(tmp);
        }
        cout << sum << endl;
    }
}