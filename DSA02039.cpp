#include <bits/stdc++.h>
using namespace std;
int n, a[100], b[100];
vector<string> v;
void out(int i){
    string s = "(";
    for(int j = 1; j <= i; j++){
        s += to_string(b[j]);
        s += " ";
    }
    s.pop_back();
    s += ")";
    v.push_back(s);
}
void Try(int i, int sum, int pre){
    for(int j = pre; j >= 1; j--){
        if(sum + j > n){
            continue;
        }
        b[i] = j;
        if(sum + j == n){
            out(i);
        }
        else Try(i + 1, sum + j, j);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1, 0, n);
        cout << v.size() << endl;
        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
        v.clear();
    }
}