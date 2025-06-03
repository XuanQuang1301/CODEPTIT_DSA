#include <bits/stdc++.h>
using namespace std;
struct Node {
    int key;
    Node *l;
    Node *r;
    Node (int i){
        key = i;
        r = NULL;
        l = NULL;
    }
};
bool ok;
Node *search(Node *t, int x){
    if(t == NULL){
        return NULL;
    }
    if(t -> key == x){
        return t;
    }
    Node *q;
    q = search(t -> l, x);
    if(q == NULL){
        q = search(t -> r, x);
    }
    return q;
}
void add_l(Node *t, int x, int y){
    if(t == NULL) return;
    Node *q;
    q = search(t, x);
    if(q -> l != NULL) return;
    else{
        q -> l = new Node(y);
    }
}
void add_r(Node *t, int x, int y){
    if(t == NULL) return;
    Node *q;
    q = search(t, x);
    if(q -> r != NULL) return;
    else{
        q -> r = new Node(y);
    }
}
int count(Node *t){
    if(t == NULL) return 0;
    if(t -> l == NULL && t -> r == NULL) return 1;
    if(!(t -> l != NULL && t -> r != NULL)){
        ok = false;
        return 0;
    }
    return count(t -> l) + count(t -> r);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Node *tool;
        for(int i = 0; i < n; i++){
            int x, y; char a;
            cin >> x >> y >> a;
            if(i == 0){
                tool = new Node(x);
            }
            if(a == 'L'){
                add_l(tool, x, y);
            }
            else add_r(tool, x, y);
        }
        ok = true;
        int left = count(tool -> l);
        int right = count(tool -> r);
        cout << left;
        if(ok && left == right){
            cout << "Yes";
        }
        else cout << "No";
        cout << endl;
    }
}