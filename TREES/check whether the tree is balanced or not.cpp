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

    
    int maxdepth(Node* root)
    {
        if(root==NULL) return 0;
        int lh=maxdepth(root->left);
        int rh=maxdepth(root->right);
        if(abs(lh-rh)>1) return -1;
        return 1+max(lh,rh);
    }
};

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right=new Node(4);
    root->left->left = new Node(3);
    root->left->left->right=new Node(5);
    int height=root->maxdepth(root);
    if(height==-1)
    {
        cout<<"Tree is not balanced";
    }
    else
    {
        cout<<"height of the tree : "<<height;
    }
    return 0;
}
