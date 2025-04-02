#include <bits/stdc++.h>
using namespace std;
int dx[] = {1, 0};
int dy[] = {0, 1};
set<string> S;
int n, a[100][100];
string s;
void Try(int i, int j){
    if(i == n && j == n){
        S.insert(s);
    }
    for(int k = 0; k < 2; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i][j] == 1){
            if(k == 0){
                s += 'D';
            }
            else{
                s += 'R';
            }
            Try(i1, j1);
            s.pop_back();
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        s = "";
        S.clear();
        Try(1, 1);
        if(S.size() == 0 || a[1][1] == 0){
            cout << -1 << endl;
        }
        else{
            for(auto i : S){
                cout << i << " ";
            }
            cout << endl;
        }
    }
}