#include <bits/stdc++.h>
using namespace std;
int n, m, a[1000][1000], pre[1000][1000];
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
                pre[i][j] = 0;
            }
        }
        int MAX = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i][j] == 0){
                    pre[i][j] = 0;
                }
                else{
                    pre[i][j] = min({pre[i - 1][j], pre[i][j - 1], pre[i - 1][j - 1]}) + 1;
                    MAX = max(MAX, pre[i][j]);
                }
            }
        }
        cout << MAX << endl;
    }
}