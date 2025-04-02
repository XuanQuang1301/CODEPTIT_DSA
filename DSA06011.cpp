#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        int sum = INT_MAX;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int tmp = a[i] + a[j];
                if(abs(tmp) < abs(sum)){
                    sum = tmp;
                }
            }
        }
        cout << sum << endl;
    }
}