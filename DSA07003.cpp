#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    getchar();
    while(t--){
        string s;
        getline(cin, s);
        
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '+' || s[i] == '-'){
                cnt1++;
            }
            else if(s[i] == '('){
                cnt2++;
            }
        }
        
        if(cnt1 != cnt2){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}