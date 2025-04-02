#include <bits/stdc++.h>
using namespace std;
int check(string a, string b){
    if(a.size() != b.size()) {
        return a.size() > b.size();
    }
    return a > b;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        queue<string> q;
        q.push("1");
        int cnt = 0;
        while(1){
            string x = q.front();
            q.pop();
            cnt++;
            string z = x + "0";
            if(check(z, s)){
                break;
            }
            q.push(z);
            z = x + "1";
            if(check(z, s)){
                break;
            }
            q.push(z);
        }
        cout << cnt + q.size() << endl;
    }
}