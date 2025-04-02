#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int tmp[1000] = {1}, MAX = INT_MIN;
    for(int i = 1; i < n; i++){
        for(int j = i - 1; j >= 0; j--){
            if(a[i] > a[j]){
                tmp[i] = max(tmp[i], tmp[j] + 1);
                MAX = max(MAX, tmp[i]);
            }
        }
    }
    cout << MAX << endl;
}