#include<bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
    int data;
    TreeNode *left, *right;

    TreeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int maxDepth(TreeNode* root) {
    if(root==NULL) return 0;
    else {
        int ldepth = maxDepth(root->left);
        int rdepth = maxDepth(root->right);

        if(ldepth>rdepth) return ldepth +1;
        else return rdepth + 1;
    }
}

int main() {

    TreeNode *root;
    root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->left->right = new TreeNode(11);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    cout<< maxDepth(root);
    
    return 0;
}