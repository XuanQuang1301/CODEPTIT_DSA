#include <bits/stdc++.h>
using namespace std;
// int check(pair<int, int> a, pair<int, int> b){

// }
int main(){
    int n; cin >> n;
    vector<pair<int, int>> ve;
    for(int i = 1; i <= n; i++){
        pair<int, int> p;
        int x, y; cin >> x >> y;
        ve.push_back({x, y});
    }
    int tmp[100005] = {1}, Max = 1;
    for(int i = 1; i < n; i++){
        for(int j = i - 1; j >= 0; j--){
            if(ve[i].first > ve[j].first && ve[i].second > ve[j].second){
                tmp[i] = max(tmp[i], tmp[j] + 1);
            }
        }
        Max = max(Max, tmp[i]);
    }
    cout << Max << endl;
}