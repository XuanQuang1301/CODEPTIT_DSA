#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ']' && !st.empty() && s[st.top()] == '[' ){
                st.pop();
            }
            else if(s[i] == '}' && !st.empty() && s[st.top()] == '{'){
                st.pop();
            }
            else if(s[i] == ')' && !st.empty() && s[st.top()] == '('){
                st.pop();
            }
            else st.push(i);
        }
        if(st.empty()){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}