#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        ll sum = 0;
        int n = s.size();
        for(int i = 0; i < n; i++){
            for(int j = 1; j <= n - i; j++){
                sum += stoll(s.substr(i, j));
            }
        }
        cout << sum << endl;
    }
}