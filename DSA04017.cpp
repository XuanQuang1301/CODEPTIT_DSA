#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a[1000001], b[1000001];
int main(){
    int t;
    cin >> t;
    while(t--){ 
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n - 1; i++){
            cin >> b[i];
        }
        int i = 0;
        while(a[i] == b[i]){
            i++;
        }
        cout << i + 1 << endl;
    }
}