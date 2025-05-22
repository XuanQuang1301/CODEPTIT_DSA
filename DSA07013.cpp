#include <bits/stdc++.h>
using namespace std;
long long solve(long long x, long long y, char a){
    if(a == '+') return x + y;
    if(a == '-') return x - y;
    if(a == '*') return x * y;
    else return x / y;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<long long> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                long long y = st.top(); st.pop();
                long long x = st.top(); st.pop();
                long long z = solve(x, y, s[i]);
                st.push(z);
            }
            else st.push(s[i]  -'0');
        }
        cout << st.top() << endl;
    }
}