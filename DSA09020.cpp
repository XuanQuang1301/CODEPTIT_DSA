#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n + 1][n + 1] = {0};
    getchar();
    for(int i = 1; i <= n; i++){
        string s; getline(cin, s);
        stringstream ss(s);
        string x;
        while(ss >> x){
            a[i][stoi(x)] = 1;
            a[stoi(x)][i] = 1;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}