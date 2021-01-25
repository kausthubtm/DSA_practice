#include <bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
    int data;
    TreeNode *right, *left;
    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void findLeaves(TreeNode *root, vector <int> &leaves) {
    if(root==NULL) return;
    if(root->left == NULL && root->right == NULL)
        leaves.push_back(root->data);
    findLeaves(root->left, leaves);
    findLeaves(root->right, leaves);
}

bool leafSimilar(TreeNode *root1, TreeNode *root2) {
    vector <int> arr1;
    vector <int> arr2;
    findLeaves(root1, arr1);
    findLeaves(root2, arr2);
    return (arr1==arr2);
} 

int main() {
    TreeNode *root1, *root2;
    root1 = new TreeNode(3);
    root1->left = new TreeNode(5);
    root1->left->left = new TreeNode(6);
    root1->left->right = new TreeNode(2);
    root1->left->right->left = new TreeNode(7);
    root1->left->right->right = new TreeNode(4);
    root1->right = new TreeNode(1);
    root1->right->left = new TreeNode(9);
    root1->right->right = new TreeNode(8);

    root2 = new TreeNode(3);
    root2->left = new TreeNode(5);
    root2->left->left = new TreeNode(6);
    root2->left->right = new TreeNode(7);
    root2->right = new TreeNode(1);
    root2->right->left = new TreeNode(4);
    root2->right->right = new TreeNode(2);
    root2->right->right->left = new TreeNode(9);
    root2->right->right->right = new TreeNode(8);

    cout<<leafSimilar(root1, root2)<<"\n";
    return 0;
}