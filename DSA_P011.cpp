#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<char>> VE;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
void nhap(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        vector<char> v;
        for(int j = 0; j < m; j++){
            char s;
            cin >> s;
            v.push_back(s);
        }
        VE.push_back(v);
    }
}
void loang(int i, int j){
    VE[i][j] = '.';
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && VE[i1][j1] == '#'){
            loang(i1, j1);
        }
    }
}
int main(){
    nhap();
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(VE[i][j] == '#'){
                    cnt++;
                    loang(i, j);
                }
            }
        }
    cout << cnt << endl;
}