#include <bits/stdc++.h>
using namespace std;
int sum, n, a[100];
bool check;
void Try(int i, int cnt){
    if(i == n || check || cnt == sum){
        check = true;
        return;
    }
    if(cnt + a[i] <= sum) Try(i + 1, cnt + a[i]);
    Try(i + 1, cnt);
}
int main(){
    int t; cin >> t;
    while(t--){ 
        cin >> n;
        sum = 0;
        check = false;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if(sum % 2 == 0){
            sum /= 2;
            Try(0, 0);
        }
        if(check) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}