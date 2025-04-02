#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second){
        return a.first > b.first;
    }
    return a.second > b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        vector<pair<int, int>> V(n);
        for(int i = 0; i < n; i++){
            cin >> x >> V[i].first >> V[i].second;
        }
        sort(V.begin(), V.end(), cmp);
        int tmp[10000] = {0};
        pair<int, int> p = {0, 0};
        for(int i = 0; i < n; i++){
            for(int j = V[i].first; j >= 1; j--){
                if(!tmp[j]){
                    tmp[j] = 1;
                    p.first++;
                    p.second += V[i].second;
                    break;
                }
            }
        }
        cout << p.first << " " << p.second << endl;
    }
}