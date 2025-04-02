#include <bits/stdc++.h>
using namespace std;
int n, a[100], tmp[100];
map<string, int> MP;
string s;
void Try(int i){
    for(int j = i; j < n; j++){
        if(!tmp[j] && a[i - 1] <= j){
            tmp[j] = 1;
            a[i] = j;
            for(int x = 0; x <= i; x++){
                cout << s[a[x]];
            }
            cout << " ";
            Try(i + 1);
            tmp[j] = 0;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> s;
        Try(0);
        cout << endl;
    }
}