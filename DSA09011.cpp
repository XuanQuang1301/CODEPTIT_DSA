#include <bits/stdc++.h>
using namespace std;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int a[1001][1001], n, m, cnt;
void Try(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 8; k++){
        int x = dx[k] + i, y = dy[k] + j;
        if(x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] == 1){
            Try(x, y);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        cnt = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i][j] == 1){
                    Try(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}