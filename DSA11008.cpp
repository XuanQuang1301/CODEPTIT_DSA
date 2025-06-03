#include <bits/stdc++.h>
using namespace std;
struct Node {
    int key;
    Node *left;
    Node *right;
    Node (int item){
        key = item;
        left = NULL;
        right = NULL;
    }
};
Node *search(Node *t, int x){
    Node *p;
    if(t == NULL) return NULL;
    if(t -> key == x) return t;
    p = search(t->left, x);
    if(p == NULL){
        p = search(t->right, x);
    }
    return p;
}
void add_l(Node *t, int x, int y){
    Node *q, *p;
    if(t == NULL){
        return;
    }
    q = search(t, x);
    if(q -> left != NULL) return;
    else {
        q->left = new Node(y);
    }
}
void add_r(Node *t, int x, int y){
    Node *q, *p;
    if(t == NULL){
        return;
    }
    q = search(t, x);
    if(q -> right != NULL) return;
    else {
        q->right = new Node(y);
    }
}
int count(Node *t){
    if(t == NULL) return 0;
    if(t->left == NULL && t -> right == NULL) return 1;
    return count(t -> left) + count(t -> right);
}
int main(){
    int t; cin >> t;
    while(t--){
        Node *t;
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            int x, y; char a;
            cin >> x >> y >> a;
            if(i == 1){
                t = new Node(x);
            }
            if(a == 'L'){
                add_l(t, x, y);
            }
            else add_r(t, x, y);
        }
        cout << (count(t->left) == count(t->right)) << endl;
    }
}