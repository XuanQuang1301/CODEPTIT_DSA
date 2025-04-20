#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ')' && !st.empty() && st.top() == '('){
                st.pop();
            }
            else st.push(s[i]);
        }
        cout << s.size() - st.size() << endl;
    }
}