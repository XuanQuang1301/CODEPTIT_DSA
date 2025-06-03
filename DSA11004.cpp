#include <bits/stdc++.h>
using namespace std;
struct Node {
    int key;
    Node *left;
    Node *right;
    Node (int itim){
        key = itim;
        left = NULL;
        right = NULL;
    }
};
void level_order(Node *t){
    if(t == NULL) return;
    queue<Node*> q;
    q.push(t);
    while(!q.empty()){
        Node * tmp = q.front(); q.pop();
        cout << tmp -> key << " ";
        if(tmp -> left != NULL){
            q.push(tmp -> left);
        }
        if(tmp -> right != NULL){
            q.push(tmp -> right);
        }
    }
    cout << endl;
}
Node *search(Node *root, int x){
    Node *p;
    if(root == NULL){ 
        return NULL;
    }
    if(root-> key == x){
        return root;
    }
    p = search(root->left, x);
    if(p == NULL){
        p = search(root -> right, x);
    }
    return p;
}
void add_l(Node *t, int x, int y){
    Node *q, *p;
    p = search(t, x);
    if(p == NULL){
       // p = new Node(x);
        return;
    }
    else if(p -> left != NULL) return;
    else{
        q = new Node(y);
        p -> left = q;
    }
}
void add_r(Node *t, int x, int y){
    Node *q, *p;
    p = search(t, x);
    if(p == NULL){
        //p = new Node(x);
        return;
    }
    else if(p -> right != NULL) return;
    else{
        q = new Node(y);
        p -> right = q;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Node *t = NULL;
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
        level_order(t);
    }
}