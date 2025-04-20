#include <bits/stdc++.h>
using namespace std;
double A[1000], B[1000];
int tmp[1000];
int main(){
    int t; cin >> t;
    while(t--){
        int n; 
        cin >> n;
        
        for(int i = 0; i < n; i++){
            cin >> A[i] >> B[i];
            tmp[i] = 1;
        }
        int MAX = 0;
        for(int i = 1; i < n; i++){
            for(int j = i - 1; j >= 0; j--){
                if(A[i] > A[j] && B[i] < B[j]){
                    tmp[i] = max(tmp[i], tmp[j] + 1);
                }
            }
            MAX = max(MAX, tmp[i]);
        }
        cout << MAX << endl;
    }
}