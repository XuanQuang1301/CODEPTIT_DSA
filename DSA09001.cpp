#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int v, e;
        cin >> v >> e;
        int a[v + 1][v + 1] = {0};
        for(int i = 0; i < e; i++){
            int x, y; cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        for(int i = 1; i <= v; i++){
            cout << i << ": ";
            for(int j = 1; j <= v; j++){
                if(a[i][j] == 1){
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
}