#include <bits/stdc++.h>
using namespace std;
int main(){
    long long S, n;
    cin >> S >> n;
    long long tmp[S + 5] = {};
    tmp[0] = 1;
    for(int i = 1; i <= n; i++){
        long long x;
        cin >> x;
        for(int j = S; j >= x; j--){
            if(tmp[j] == 0 && tmp[j - x] == 1){
                tmp[j] = 1;
            }
        }
    }
    for(int i = S; i >= 0; i--){
        if(tmp[i] == 1){
            cout << i << endl;
            break;
        }
    }
}