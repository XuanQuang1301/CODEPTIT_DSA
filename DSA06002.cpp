#include <bits/stdc++.h>
using namespace std;
int n, x;
vector< pair<int, int>> VE;
bool cmp(pair<int, int> a, pair<int, int> b){
    if(abs(a.first - x) == abs(b.first - x)){
        return a.second < b.second;
    }
    return abs(a.first - x) < abs(b.first - x);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> x;
        VE.resize(n);
        for(int i = 0; i < n; i++){
            cin >> VE[i].first;
            VE[i].second = i;
        }
        sort(VE.begin(), VE.end(), cmp);
        for(auto i : VE) cout << i.first << " ";
        cout << endl;
    }
}