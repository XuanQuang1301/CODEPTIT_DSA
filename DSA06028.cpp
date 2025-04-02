#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<string> VE;
    for(int i = 0; i < n - 1; i++){
        int x = i;
        int tmp = a[i];
        for(int j = i + 1; j < n; j++){
            if(a[j] < tmp){
                tmp = a[j];
                x = j;
            }
        }
        swap(a[i], a[x]);
        string s = "Buoc " + to_string(i + 1) + ": ";
        for(auto x : a){
            s += to_string(x);
            s += " ";
        }
        VE.push_back(s);
    }
    for(int i = VE.size() - 1; i >= 0; i--){
        cout << VE[i] << endl;
    }
}