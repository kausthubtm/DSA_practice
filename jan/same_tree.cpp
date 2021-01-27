#include <bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
    int data;
    TreeNode *left, *right;

    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool IsSame(TreeNode *node1, TreeNode *node2) {
    if (node1 == NULL && node2 == NULL) return true;
    if (node1 == NULL || node2 == NULL) return false;
    if (node1->data != node2->data) return false;
    return IsSame(node1->right, node2->right) &&
            IsSame(node1->left, node2->left);
}

int main() {
    TreeNode *root1, *root2;

    root1 = new TreeNode(5);
    root1->left = new TreeNode(1);
    root1->right = new TreeNode(2);
    root1->right->right = new TreeNode(2);

    root2 = new TreeNode(5);
    root2->left = new TreeNode(1);
    root2->right = new TreeNode(2);

    cout<<IsSame(root1, root2);

    return 0;
}