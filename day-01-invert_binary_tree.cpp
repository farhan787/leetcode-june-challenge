#include <iostream>
#include <vector>

using namespace std;

// Time Complexity => O(height of tree)
// Space Complexity => O(height of tree)
void invertTreeHelper(TreeNode* root) {
    if (!root) return;

    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    invertTreeHelper(root->left);
    invertTreeHelper(root->right);
}

TreeNode* invertTree(TreeNode* root) {
    invertTreeHelper(root);
    return root;
}

int main() {
}
