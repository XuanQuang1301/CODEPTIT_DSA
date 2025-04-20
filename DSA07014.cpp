#include <bits/stdc++.h>
using namespace std;
int solve(int x, int y, char s){
    if(s == '-') return x - y;
    if(s == '+') return x + y;
    if(s == '*') return x * y;
    if(s == '/') return x / y;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<int> st;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '-' || s[i] == '+' || s[i] == '*' || s[i] == '/'){
                int x = st.top(); st.pop();
                int y = st.top(); st.pop();
                int z = solve(x, y, s[i]);
                st.push(z);
            }
            else st.push(s[i] - '0');
        }
        cout << st.top() << endl;
    }
}