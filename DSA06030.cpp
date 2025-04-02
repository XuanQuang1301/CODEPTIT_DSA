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
        for(int i = 0; i < n; i++){
            bool ok = false;
            for(int j = 0; j < n - i - 1; j++){
                if(a[j] > a[j + 1]){
                    swap(a[j], a[j + 1]);
                    ok = true;
                }
            }
            if(!ok) break;
            string s =  "Buoc " + to_string(i + 1) + ": ";
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