#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin >> t;
    getchar();
    while(t--){
        string s = "";
        getline(cin, s);
        stringstream ss(s);
        stack<string> st;
        string x;
        while(ss >> x){
            st.push(x);
        }
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
        
    }
}