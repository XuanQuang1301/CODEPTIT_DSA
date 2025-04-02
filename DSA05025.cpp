#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long tmp[n + 5] = {0};
        tmp[0] = 1;
        for(long long i = 1; i <= n; i++){
            for(int j = 1; j <= 3; j++){
                if(j > i) break;
                tmp[i] = (tmp[i] + tmp[i - j]);
            }
        }
        cout << tmp[n] << endl;
    }
}