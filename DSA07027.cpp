#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n + 5];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        stack<int> st;
        int r[n + 5];
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && a[i] >= st.top()){
                st.pop();
            }
            if(st.empty()){
                r[i] = -1;
            }
            else{
                r[i] = st.top();
            }
            st.push(a[i]);
        }
        for(int i = 0; i < n; i++){
            cout << r[i] << " ";
        }
        cout << endl;
        
    }  
}