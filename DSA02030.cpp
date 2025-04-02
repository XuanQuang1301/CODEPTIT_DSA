#include <bits/stdc++.h>
using namespace std;
char c;
int k;
string s;
void Try(char a){
    if(s.size() == k){
        cout << s << endl;
        return;
    }
    for(char i = a; i <= c; i++){
        s += i;
        Try(i);
        s.pop_back();
    }
}
int main(){
    cin >> c >> k;
    Try('A');
}
