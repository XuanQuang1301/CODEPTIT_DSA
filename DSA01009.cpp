#include <bits/stdc++.h>
using namespace std;
string s;
int n, k;
vector<string> v;
void in(){
    int dem = 0, cnt = 0;
    int i = 0;
    while(i < n){
        cnt = 0;
        while(s[i] == 'A' && i < n){
            cnt++;
            if(cnt == k){
                if(s[i + 1] == 'B' || i == n - 1){
                    dem++;
                    break;
                }
            }
            i++;
        }
        i++;
    }
    if(dem == 1){
        string z = "";
        for(int i = 0; i < n; i++){
            z.push_back(s[i]);
        }
        v.push_back(z);
    }
}
void Try(int i){
    for(char j = 'A'; j <= 'B'; j++){
        s += j;
        if(s.size() == n){
            in();
        }
        else Try(i + 1);
        s.pop_back();
    }
}
int main(){
    cin >> n >> k;
    Try(1);
    cout << v.size() << endl;
    for(auto i : v){
        cout << i << endl;
    }
}