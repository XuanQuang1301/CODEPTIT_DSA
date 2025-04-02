#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int tmp[10000] = {0}, MAX = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        tmp[x] = tmp[x - 1] + 1;
        MAX = max(MAX, tmp[x]);
    }
    cout << n - MAX << endl;
    return 0;
}