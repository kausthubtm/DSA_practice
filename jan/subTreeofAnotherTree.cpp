#include <bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(TreeNode *root, vector <int> &nodes) {
    if(root==NULL) return;
    nodes.push_back(root->data);
    preorder(root->left, nodes);
    preorder(root->right, nodes);
}

bool isSubTree(TreeNode *root1, TreeNode *root2) {
    vector <int> arr1;
    vector <int> arr2;
    preorder(root1, arr1);
    preorder(root2, arr2);
    int count;

    for(int i=0; i<= arr1.size()-arr2.size(); i++) {
        count = 0;
        if(arr1[i]==arr2[0]) {
            for(int j=0; j<arr2.size(); j++) {
                if(arr1[i+j]==arr2[j]) count++;
            }
            if(count==arr2.size()) return true;
        }
    }
    return false;
}

int main() {

    TreeNode *root1;
    root1 = new TreeNode(3);
    root1->left = new TreeNode(4);
    root1->right = new TreeNode(5);
    root1->right->right = new TreeNode(7);
    root1->left->left = new TreeNode(1);
    root1->left->right = new TreeNode(2);


    TreeNode *root2;
    root2 = new TreeNode(5);
    root2->right = new TreeNode(7);

    cout<<isSubTree(root1, root2)<<"\n";

    return 0;
}