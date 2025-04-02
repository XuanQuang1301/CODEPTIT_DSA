#include <bits/stdc++.h>
using namespace std;
vector<int> v = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int dem = 0;
        while(n){
            for(int i = v.size() - 1; i >= 0; i--){
                while(n >= v[i] && n > 0){
                    n -= v[i];
                    dem++; 
                }
            }
        }
        cout << dem << endl;
    }
}