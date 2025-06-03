#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key; 
    Node *l;
    Node *r;
    Node (int i){
        key = i;
        l = NULL;
        r = NULL;
    }
};
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
    Node *q;
    if(t == NULL) return;
    q = search(t, x);
    if(q -> l != NULL) return;
    else{
        q -> l = new Node(y);
    }
}
void add_r(Node *t, int x, int y){
    Node *q;
    if(t == NULL) return;
    q = search(t, x);
    if(q -> r != NULL) return;
    else{
        q -> r = new Node(y);
    }
}
int main(){
    int time; cin >> time;
    while(time--){
        int n; cin >> n;
        Node *t;
        for(int i = 0; i < n; i++){
            int x, y; char a;
            cin >> x >> y >> a;
            if(i == 0){
                t = new Node(x);
            }
            if(a == 'L') add_l(t, x, y);
            else add_r(t, x, y);
        }
        stack<Node*> st1, st2;
        st1.push(t);
        
        while(!st1.empty() || !st2.empty()){
            while(!st1.empty()){
                Node *tmp = st1.top(); st1.pop();
                cout << tmp -> key << " ";
                if(tmp -> r) st2.push(tmp->r);
                if(tmp -> l) st2.push(tmp->l);
            }
            while(!st2.empty()){
                Node *tmp = st2.top(); st2.pop();
                cout << tmp -> key << " ";
                if(tmp -> l) st1.push(tmp->l);
                if(tmp -> r) st1.push(tmp->r);
            }
        }
        cout << endl;
    }
}