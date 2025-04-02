#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main(){
    int x; cin >> x;
    stack<int> ST;
    while(x--){
        string s; cin >> s;
        if(s == "PUSH"){
            int n; cin >> n;
            ST.push(n);
        }
        else if(s == "PRINT"){
            if(ST.empty()){
                cout << "NONE";
            }
            else cout << ST.top();
            cout << endl;
        }
        else if(s == "POP"){
            if(!ST.empty()){
                ST.pop();
            }
        }
    }
}