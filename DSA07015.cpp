#include <bits/stdc++.h>
using namespace std;
int priority(char c){
    if(c == '*' || c == '/') return 3;
    if(c == '+' || c == '-') return 2;
    return 1;
}
long long solve(long long a, long long b, string c){
    if(c == "+") return (a) + (b);
    if(c == "*") return (a) * (b);
    if(c == "-") return (a) - (b);
    return (a) / (b);
}
long long num(string a){
    long long x = 0;
    for(int i = 0; i < a.size(); i++){
        x = x * 10 + a[i] - '0';
    }
    return x;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        vector<string> ve;
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                string tmp = "";
                while(i < s.size() && isdigit(s[i])){
                    tmp += s[i];
                    i++;
                }
                i--;
                ve.push_back(tmp);
            }
            else if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                while(st.top() != '('){
                    ve.push_back(string(1, st.top()));
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && priority(st.top()) >= priority(s[i])){
                    ve.push_back(string(1, st.top()));
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ve.push_back(string(1, st.top()));
            st.pop();
        }
        stack<long long> st2;
        for(int i = 0; i < ve.size(); i++){
            if(ve[i] == "+" || ve[i] == "-" || ve[i] == "*" || ve[i] == "/"){
                long long b = st2.top(); st2.pop();
                long long a = st2.top(); st2.pop();
                long long x = solve(a, b, ve[i]);
                st2.push((x));
            }
            else{
                st2.push(num(ve[i]));
            }
        }
        cout << st2.top() << endl;
    }
}