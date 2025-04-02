#include <bits/stdc++.h>
using namespace std;
string s;
int check = 0;
void ktao(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i < 0){
        check = 1;
    }
    else{
        s[i] = '1';
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> s;
        ktao();
        for(int i = 0; i < s.size(); i++){
            cout << s[i];
        }
        cout << endl;
    }
}