#include <bits/stdc++.h>
using namespace std;
long long Quydoi(string a){
    long long n = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '1'){
            n += pow(2, a.size() - i - 1);
        }
    }
    return n;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << Quydoi(a) * Quydoi(b) << endl;
    }
}