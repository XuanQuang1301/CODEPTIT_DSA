#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int k;
        string s;
        cin >> k >> s;
        for(int i = 0; i < s.size(); i ++){
            if(k == 0){
                break;
            }
            char c = '0';
            for(int j = i + 1; j < s.size(); j++){
                c = max(c, s[j]);
            }
            if(c <= s[i]) continue;
            string z = s;
            for(int j = i + 1; j < s.size(); j++){
                
                if(s[j] == c){
                    string tmp = s;
                    swap(tmp[i], tmp[j]);
                    z = max(z, tmp);
                }
            }
            s = z;
            k--;
        }
        cout << s << endl;
    }
}