#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue<string> q;
        q.push("1");
        
        while(n){
            string x = q.front();
            cout << x << " ";
            q.pop();
            q.push(x + "0");
            q.push(x + "1");
            n--;
        }
        cout << endl;
    }
}