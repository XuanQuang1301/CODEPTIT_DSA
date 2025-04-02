#include <bits/stdc++.h>
using namespace std;
int n, x, a[100], b[100], c[100], sum;
vector<int> v;
void check(){
    int tmp = 0, cnt = 0;
    
    for(int i = 0; i < n; i++){
        if(c[i] == 1){
            tmp += b[i];
            cnt += a[i];
        }
    }
    if(tmp > x) return;
    else if(cnt > sum){
        v.clear();
        sum = cnt;
        for(int i = 0; i < n; i++){
            v.push_back(c[i]);
        }
    }
}
void Try(int i){
    for(int j = 0; j <= 1; j++){
        c[i] = j;
        if(i == n - 1){
            check();
        }
        else Try(i + 1);
    }
}
int main(){
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    sum = 0;
    Try(0);
    cout << sum << endl;
    for(auto i : v) cout << i <<  " ";
    cout << endl;
}