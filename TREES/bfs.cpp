#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }

    void bfs(Node* root) {
        if(root==NULL) return;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node* curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left !=NULL) q.push(curr->left);
            if(curr->right !=NULL) q.push(curr->right);
        }
    }
};

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->bfs(root);
    return 0;
}
