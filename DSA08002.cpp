#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s;
    queue<int> q;
    while(n--){
        cin >> s;
        if(s == "PUSH"){
            int x; cin >> x;
            q.push(x);
        }
        else if(s == "PRINTFRONT"){
            if(!q.empty()) cout << q.front() << endl;
            else cout << "NONE" << endl;
        }
        else if(s == "POP"){
            if(!q.empty()) q.pop();
        }
    }
}