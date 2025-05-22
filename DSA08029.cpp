#include <bits/stdc++.h>
using namespace std;
int a[1000], b[1000];
int QuayPhai(int n){
    int a[7], b[7];
    int x = 6;
    while(n){
        a[x] = n % 10;
        n /= 10;
        x--;
    }
    b[1] = a[1];
    b[2] = a[5];
    b[3] = a[2];
    b[4] = a[4];
    b[5] = a[6];
    b[6] = a[3];
    int tmp = 0;
    for(int i = 1; i < 7; i++){
        tmp = tmp * 10 + b[i];
    }
    return tmp;
}
int QuayTrai(int n){
    int a[7], b[7];
    int x = 6;
    while(n){
        a[x] = n % 10;
        n /= 10;
        x--;
    }
    b[1] = a[4];
    b[2] = a[1];
    b[3] = a[3];
    b[4] = a[5];
    b[5] = a[2];
    b[6] = a[6];
    int tmp = 0;
    for(int i = 1; i < 7; i++){
        tmp = tmp * 10 + b[i];
    }
    return tmp;
}

