#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<char> SE;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            for(int j = 0; j < s.size(); j++){
                SE.insert(s[j]);
            }
        }
        for(auto i : SE) cout << i << " ";
        cout << endl;
    }
}
