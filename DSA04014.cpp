#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a[10000000];
ll cnt;
void merge(int l, int m, int r){
    vector<int> v;
    int i = l, j = m + 1;
    while(i <= m && j <= r){
        if(a[i] <= a[j]){
            v.push_back(a[i]);
            i++;
        }
        else{
            v.push_back(a[j]);
            j++;
            cnt += m - i + 1;
        }
    }
    while(i <= m){
        v.push_back(a[i]);
        i++;
    }
    while(j <= r){
        v.push_back(a[j]);
        j++;
    }
    for(i = l; i <= r; i++){
        a[i] = v[i - l];
    }
}
void mergeSort(int l, int r){
    if(l == r){
        return;
    }
    int m = (l + r) / 2;
    mergeSort(l, m);
    mergeSort(m + 1, r);
    merge(l, m, r);
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        cnt = 0;
        for(int i = 0; i < n; i++) {cin >> a[i];}
        mergeSort(0, n - 1);
        cout << cnt << endl;
    }
}