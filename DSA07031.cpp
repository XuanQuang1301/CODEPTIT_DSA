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
        vector<string> ve;
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            ve.push_back(s);
        }
        stack<string> st;
        for(int i = n - 1; i >= 0; i--){
            if(ve[i] == "+" || ve[i] == "-" || ve[i] == "*" || ve[i] == "/"){
                string x = st.top(); st.pop();
                string y = st.top(); st.pop();
                string z = to_string(solve(ve[i], x, y));
                st.push(z);
            }
            else{
                st.push(ve[i]);
            }
        }
        cout << st.top() << endl;
    }
}