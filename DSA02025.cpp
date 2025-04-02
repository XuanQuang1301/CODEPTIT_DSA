#include <bits/stdc++.h>
using namespace std;
int n,  cnt, tmp[100];
string a[100], b[100];

void Try(int i, int ans){
    if(i > n){
        cnt = min(cnt, ans);
    }
    for(int j = 0; j < n; j++){
        if(!tmp[j]){
            tmp[j] = 1;
            b[i] = a[j];

            int dd[127] = {};
            for(char c : b[i]) dd[c]++;
            for(char c: b[i - 1]) dd[c]++;
            
            int dem = 0;
            for(int i = 'A'; i <= 'Z'; i++){
                if(dd[i] == 2){
                    dem++;
                }
            }
            if(dem + ans < cnt){
                Try(i + 1, dem + ans);
            }
            tmp[j] = 0;
        }
    }
}
int main(){
    cin >> n;
    cnt = 100;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    Try(1, 0);
    cout << cnt << endl;
}