#include <bits/stdc++.h>
using namespace std;
long long solve(string s, string a, string b){
    if(s == "+") return stoll(a) + stoll(b);
    else if(s == "-") return stoll(a) - stoll(b);
    else if(s == "*") return stoll(a) * stoll(b);
    else return stoll(a) / stoll(b);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        stack<string> st;
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                string y = st.top(); st.pop();
                string x = st.top(); st.pop();
                string z = to_string(solve(s, x, y));
                st.push(z);
            }
            else{
                st.push(s);
            }
        }
        
        cout << st.top() << endl;
    }
}