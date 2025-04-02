#include <bits/stdc++.h>
using namespace std;
int n, a[100][100], b[100][100];
string s;
set<string> S;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, 1, -1, 0};
void Try(int i, int j){
    if(i == n && j == n){
        S.insert(s);
    }
    for(int k = 0; k < 4; k++){
        int x = dx[k] + i, y = dy[k] + j;
        if(x >= 1 && x <= n && y >= 1 && y <= n && a[x][y] == 1 && b[x][y] == 0){
            b[x][y] = 1;
            if(k == 0){
                s += "U";
            }
            else if(k == 1){
                s += "R";
            }
            else if(k == 2){
                s += "L";
            }
            else s += "D";
            Try(x, y); 
            s.pop_back();
            b[x][y] = 0;
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
                b[i][j] = 0;
            }
        }
        b[1][1] = 1;
        s = "";
        S.clear();
        Try(1, 1);
        if(S.size() == 0 || a[1][1] == 0 || a[n][n] == 0){
            cout << -1;
        }
        else{
            for(auto i : S){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}