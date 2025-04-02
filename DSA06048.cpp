#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v;
        int j, MIN = INT_MAX;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x < MIN){
                MIN = x;
                j = i;
            }
        }
        cout << j << endl;
    }
}