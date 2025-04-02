#include <bits/stdc++.h>
using namespace std;
int n, a[100];
vector<int> v;
set<string> s;
string str(){
    string tmp;
    for(auto x : v){
        tmp += to_string(x) + " ";
    }
    tmp.pop_back();
    return tmp;
}
void Try(int i){
    for(int j = i + 1; j <= n; j++){
        if(a[j] > a[i]){
            v.push_back(a[j]);
            if(v.size() >= 2){
                s.insert(str());
            }
            if(i < n) Try(j);
            v.pop_back();
        }
    }
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    Try(0); 
    for(auto i : s){
        
        cout << i << endl;
    }
}