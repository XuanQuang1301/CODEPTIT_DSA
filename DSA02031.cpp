#include <bits/stdc++.h>
using namespace std;
char c;
string s = "@ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n, a[100], tmp[100];
bool check(char x){
    return (x == 'A' || x == 'E');
}
void in(){
    for(int i = 2; i < n; i++){
        if(check(s[a[i]])){
            if(!check(s[a[i - 1]]) && !check(s[a[i + 1]])){
                return;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << s[a[i]];
    }
    cout << endl;
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!tmp[j]){
            tmp[j] = 1;
            a[i] = j;
            if(i == n){
                in();
            }
            else Try(i + 1);
            tmp[j] = 0;
        }
    }
}
int main(){
    cin >> c;
    for(int i = 1; i < 26; i++){
        if(s[i] == c){
            n = i;
        }
    }
    Try(1);
}