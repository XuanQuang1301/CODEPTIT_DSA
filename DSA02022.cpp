#include <bits/stdc++.h>
using namespace std;
int a[8], ok;
void ktao(){
    for(int i = 0; i < 8; i++){
        a[i] = 0;
    }
}
void Sinh(){
    int i = 7;
    while(i >= 0 && a[i] == 2){
        a[i] = 0;
        i--;
    }
    if(i < 0){
        ok = 0;
    }
    else {
        a[i] = 2;
    }
}
int main(){
    ok = 1;
    ktao();
    while(ok){
        if((a[0] != 0 || a[1] != 0) && (a[2] != 2 && a[3] != 0) && (a[4] != 0)){
            for(int i = 0; i < 8; i++){
                cout << a[i];
                if(i == 1 || i == 3){
                    cout << "/";
                }
            }
            cout << endl;
        }
        Sinh();
    }
}