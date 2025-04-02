#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int seven = n / 7;
        int four = n % 7;      
        while(four % 4 != 0 && seven > 0 && four <= 28){
            four += 7;
            seven--;
        }
        if(four % 4 == 0){
            four /= 4;
            while(four--) cout << 4;
            while(seven--) cout << 7;
        }
        else cout << -1;
        cout << endl;
    }
}