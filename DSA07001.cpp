#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main(){
    string s; 
    stack<int> ST;
    while(cin >> s){
        if(s == "push"){
            int x; cin >> x;
            ST.push(x);
        }
        else if(s == "show"){
            if(!ST.empty()){
                stack<int> tmp = ST;
                vector<int> ve;
                while(!tmp.empty()){
                    ve.push_back(tmp.top());
                    tmp.pop();
                }
                for(int i = ve.size() - 1; i >= 0; i--){
                    cout << ve[i] << " ";
                }
                cout << endl;
            }
            else cout << "empty" << endl;
        }
        else if(s == "pop"){
            ST.pop();
        }
    }
}