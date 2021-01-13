#include <bits/stdc++.h>
using namespace std;

int flag = 1;

class TreeNode {

    public:
    TreeNode *left;
    TreeNode *right;
    int data;

    TreeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void Inorder(TreeNode *root) {
    if(root == NULL) return ;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

TreeNode *CheckSymmetry(TreeNode *root) {
    if(root==NULL) return NULL;
    TreeNode *left = CheckSymmetry(root->left);
    TreeNode *right = CheckSymmetry(root->right);
    return root;
}

TreeNode *Inverse(TreeNode *node) {
    if (node == NULL) return NULL;
    TreeNode *right = Inverse(node->right);
    TreeNode *left = Inverse(node->left);
    //if ((node->left->data != node->right->data) && flag) flag = 0;
    return node; 
}



int main(){

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    Inorder(root);
    cout<<"\n";

    root = CheckSymmetry(root);
    if (flag) cout<<"It is a symmetric Tree \n";
    else cout<<"It is not a symmetric Tree \n";

}