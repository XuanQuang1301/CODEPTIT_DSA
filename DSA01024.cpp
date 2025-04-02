#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
set<string> s;
vector<string> v;
void out(){
    for(int i = 1; i <= k; i++){
        cout << v[a[i] - 1] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = a[i - 1] + 1; j <= n; j++){
        a[i] = j;
        if(i == k){
            out();
        }
        else{
            Try(i + 1);
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        string z; cin >> z;
        s.insert(z);
    }
    n = s.size();
    for(auto i : s){
        v.push_back(i); 
    }
    Try(1);
    return 0;
}