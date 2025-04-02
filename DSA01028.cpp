#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
set<int> s;
vector<int> v;
void out(){
    for(int i = 1; i <= k; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = a[i - 1] + 1; j <= n; j++){
        a[i] = j;
        if(i == k){
            out();
        }
        else Try(i + 1);

    }
}
int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        s.insert(x);
    }
    n = s.size();
    int j = 1;
    for(auto i : s){
        a[j] = i;
        j++;
    }
    a[0] = 0;
    Try(1);
}