#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<string> VE;

    VE.push_back("Buoc 0: " + to_string(a[0]));
    for(int i = 1; i < n; i++){
        int j = i - 1, tmp = a[i];
        while(j >= 0 && a[j] > tmp){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
        string s = "Buoc " + to_string(i) + ": ";
        for(int x = 0; x <= i; x++){
            s += to_string(a[x]);
            s += " ";
        }
        VE.push_back(s);
    }
    for(int i = VE.size() - 1; i >= 0; i--){
        cout << VE[i] << endl;
    }
}