#include <bits/stdc++.h>
using namespace std;
int a[1000005];
void merge(int l, int m, int r){
    int i = l, j = m + 1;
    vector<int> ans;
    while(i <= m && j <= r){
        if(a[i] < a[j]){
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(a[j]);
            j++;
        }
    }
    while(i <= m){
        ans.push_back(a[i]);
        i++;
    }
    while(j <= r){
        ans.push_back(a[j]);
        j++;
    }
    for(int i = l; i <= r; i++){
        a[i] = ans[i - l];
    }
}
void mergeSort(int l, int r){
    if(l == r) return;
    int m = (l + r) / 2;
    mergeSort(l, m);
    mergeSort(m + 1, r);
    merge(l, m, r);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        mergeSort(0, n - 1);
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}