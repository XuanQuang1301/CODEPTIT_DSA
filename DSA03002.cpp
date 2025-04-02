#include <bits/stdc++.h>
using namespace std;
string a, b;
void MIN(string &a){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '6'){
            a[i] = '5';
        }
    }
}
void MAX(string &a){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '5'){
            a[i] = '6';
        }
    }
}
int SUM(string a, string b){
    int A = 0, B = 0;
    for(int i = 0; i < a.size(); i++){
        A = A * 10 + (a[i] - '0');
    }
    for(int i = 0; i < b.size(); i++){
        B = B * 10 + (b[i] - '0');
    }
    return A + B;
}
int main(){
    cin >> a >> b;
    MIN(a), MIN(b);
    cout << SUM(a, b) << " ";
    MAX(a), MAX(b);
    cout << SUM(a, b);
}