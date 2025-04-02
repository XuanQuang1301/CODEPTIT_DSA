#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin >> t;
    while(t--){
        ll n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        ll A[n1], B[n2], C[n3];
        for(int i = 0; i < n1; i++){
            cin >> A[i];
        }
        for(int i = 0; i < n2; i++){
            cin >> B[i];
        }
        for(int i = 0; i < n3; i++){
            cin >> C[i];
        }
        int i = 0, j = 0, k = 0;
        bool ok = false;
        while(i < n1 && j < n2 && k < n3){
            if(A[i] == B[j] && A[i] == C[k]){
                cout << A[i] << " ";
                i++; j++; k++;
                ok = true;
            }
            else if(A[i] < B[j]){
                i++;
            }
            else if(C[k] < A[i]){
                k++;
            }
            else{
                j++;
            }
        }
        if(!ok) cout << -1;
        cout << endl;
    }
}