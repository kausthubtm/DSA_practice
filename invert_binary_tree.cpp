#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int inorder[10],i;

class TreeNode {

    public:
    TreeNode *right;
    TreeNode *left;
    int data;

    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

TreeNode *Inverse(TreeNode *node) {
    if (node == NULL) return NULL;
    TreeNode *right = Inverse(node->right);
    TreeNode *left = Inverse(node->left);
    node->left = right;
    node->right = left;
    return node; 
}

void Inorder(TreeNode *node) {
    if(node == NULL) return;
    Inorder(node->left);
    cout<<node->data<<" ";
    Inorder(node->right);
}

int main() {


    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);


    Inorder(root);
    cout<<"\n";

    root = Inverse(root);

    Inorder(root);
    cout<<"\n";

    return 0;
}