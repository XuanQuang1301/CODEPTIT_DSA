#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        int tmp[201] = {0};
        tmp[0] = 1;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            for(int j = s; j >= 0; j--){
                if(j >= x && tmp[j] == 0 && tmp[j - x] == 1){
                    tmp[j] = 1;
                }
            }
        }
        cout << (tmp[s] == 1 ? "YES" : "NO") << endl ;
    }
}