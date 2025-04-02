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
        for(int i = res.size() - 1; i >= 0; i--){
            cout << res[i] << " ";
        }
        cout << "8 6"  << endl;
    }
}