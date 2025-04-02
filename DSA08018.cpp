#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue<string> q;
        vector<string> res;
        q.push("6");
        q.push("8");
        res.push_back("6"); res.push_back("8");
        while(1){
            string x = q.front();
            q.pop();
            string z = x + "6";
            if(z.size() > n){
                break;
            }
            q.push(z); res.push_back(z);
            z = x + "8";
            q.push(z); res.push_back(z);
        }
        cout << res.size() << endl;
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
}