#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node (int i){
        key = i;
        left = NULL;
        right = NULL;
    }
};
Node* search(Node *t, int x){
    if(t == NULL) return NULL;
    if(t ->key == x){
        return t;
    }
    Node *q;
    q = search(t->left, x);
    if(q == NULL){
        q = search(t->right, x);
    }
    return q;
}
void add_l(Node *t, int x, int y){
    if(t == NULL){
        return;
    }
    Node *q;
    q = search(t, x);
    if(q -> left != NULL) return;
    else{
        q->left = new Node(y);
    }
}
void add_r(Node *t, int x, int y){
    if(t == NULL){
        return;
    }
    Node *q;
    q = search(t, x);
    if(q -> right != NULL) return;
    else{
        q->right = new Node(y);
    }
}
int sum;
void Try(Node *t){
    if(t == NULL){
        return;
    }
    if(t->right != NULL && t->right->left == NULL && t->right->right == NULL){
        sum += t->right->key;
    }
    Try(t->left);
    Try(t->right);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Node *root;
        for(int i = 0; i < n; i++){
            int x, y; char a;
            cin >> x >> y >> a;
            if(i == 0){
                root = new Node(x);
            }
            if(a == 'L'){
                add_l(root, x, y);
            }
            else add_r(root, x, y);
        }
        sum = 0;
        Try(root);
        cout << sum << endl;
    }
}