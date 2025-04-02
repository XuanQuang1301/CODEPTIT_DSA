#include <bits/stdc++.h>
using namespace std;
int k;

void Tong(string a, string b){
    string c = "";
    if(a.size() < b.size()){
        string tmp = a;
        a = b;
        b = tmp;
    }
    while(a.size() != b.size()){
        b = "0" + b;
    }
    int nho = 0, n = a.size();
    for(int i = n - 1; i >= 0; i--){
        int tmp = (a[i] - '0') + (b[i] - '0') + nho;
        nho = tmp / k;
        c = c + to_string(tmp % k);
    }
    if(nho != 0){
        c += to_string(nho);
    }
    for(int i = c.size() - 1; i >= 0; i--){
        cout << c[i];
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> k >> a >> b;
        Tong(a, b);
    }
}