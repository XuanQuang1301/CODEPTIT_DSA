#include <bits/stdc++.h>
using namespace std;
int a[100], ok;
string s;
void Sinh(){
    int i = s.size() - 2;
    while(i >= 0 && s[i] >= s[i + 1]){
        i--;
    }
    if(i < 0){
        ok = 1;
    }
    else{
        int j = s.size() - 1;
        while(j >= 0 && s[j] <= s[i]){
            j--;
        }
        swap(s[i], s[j]);
        sort(s.begin() + i + 1, s.end());
    }
}
int main(){
    int t; cin >> t;
    for(int i = 1; i <= t; i++){
        int n;
        cin >> n;
        cin >> s;
        ok = 0;
        Sinh();
        cout << i << " ";
        if(ok == 1){
            cout << "BIGGEST" << endl;
        }
        else{
            cout << s << endl;
        }
    }
}