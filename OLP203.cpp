#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x, y, z; 
    cin >> x >> y >> z;
    long long tmp = x + y - 1;
    long long ans = (tmp * (tmp - 1)) / 2 + 1;
    long long i = tmp, j = 1;
    while(i != x && j != y){
        j++;
        i--;
        ans++;
    }
    cout << ans << endl;
    tmp = 1;
    while((tmp * (tmp - 1) / 2) + 1 <= z){
        i++;
    }
    tmp -= 1;
    ans = tmp * (tmp - 1) / 2 + 1;
    i = tmp, j = 1;
    while(ans != z){
        ans++;
        i--;
        j++;
    }
    cout << i << " " << j;
}