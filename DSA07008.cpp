#include <bits/stdc++.h>
using namespace std;
int solve(char a){
    if(a == '^') return 4;
    if(a == '*' || a == '/') return 3;
    if(a == '+' || a == '-') return 2;
    return 1;
}
int check(char a){
    if(a == '+' || a == '-' || a == '*' || a == '/' || a == '^') {return 1;}
    return 0;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        vector<string> ve;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                while(st.top() != '('){
                    ve.push_back(string(1, st.top()));
                    st.pop();
                }
                st.pop();
            }
            else if(check(s[i])){
                while(!st.empty() && solve(st.top()) >= solve(s[i])){
                    ve.push_back(string(1, st.top()));
                    st.pop();
                }
                st.push(s[i]);
            }
            else{
                ve.push_back(string(1, s[i]));
            }
        }
        while(!st.empty()){
            ve.push_back(string(1, st.top()));
            st.pop();
        }
        for(auto i : ve){
            cout << i;
        }
        cout << endl;
    }
}