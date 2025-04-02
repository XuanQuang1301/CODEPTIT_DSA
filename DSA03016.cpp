#include <bits/stdc++.h>
using namespace std;
int S, D, a[100], ans;

int main(){
    int t; cin >> t;
    while(t--){
        cin >> S >> D;
        if(S > 9 * D){
            cout << -1 << endl;
        }
        else{
            int a[D] = {1};
            S--;
            for(int i = D - 1; i >= 0; i--){
                int x = min(S, 9 - a[i]);
                a[i] += x;
                S -= x;
            }
            for(int i = 0; i < D; i++){
                cout << a[i];
            }
            cout << endl;
        }
    }
}