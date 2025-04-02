#include <bits/stdc++.h>
using namespace std;
bool check(string s, int i){
    return ((s[i - 1] == '1' || (s[i - 1]) == '2' && s[i] <= '6'));
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int f[n + 1] = {0};
        f[0] = 1;
        s = "@" + s;
        bool ok = true;
        for(int i = 1; i <= n; i++){
            if(s[i] == '0'){
                if(i == 1 || (s[i - 1] != '1' && s[i - 1] != '2')){
                    ok = false;
                    break;
                }
                f[i] = f[i - 2];
            }
            else{
                f[i] = f[i - 1];
                if(i >= 2 && check(s, i)){
                    f[i] += f[i - 2];
                }
            }
        }
        if(ok){
            cout << f[n] << endl;
        }
        else cout << 0 << endl;
    }
}