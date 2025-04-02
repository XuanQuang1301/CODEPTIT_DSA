#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        queue<string> q;
        q.push("1");
        while(1){
            string x = q.front();
            q.pop();
            if(stoll(x) % n == 0){
                cout << x << endl;
                break;
            }
            string z = x + "0";
            if(stoll(z) % n == 0){
                cout << z << endl;
                break;
            }
            q.push(z);
            z = x + "1";
            if(stoll(z) % n == 0){
                cout << z << endl;
                break;
            }
            q.push(z);
        }
    }
}