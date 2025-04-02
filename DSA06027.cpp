#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<string> VE;
        for(int i = 0; i < n - 1; i++){
            bool ok = false;
            for(int j = i + 1; j < n; j++){
                if(a[i] > a[j]){
                    swap(a[i], a[j]);
                    ok = true;
                }
            }
            if(!ok) break;
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
}