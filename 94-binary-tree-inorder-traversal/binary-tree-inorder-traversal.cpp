class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> a;

        if (root == nullptr)
            return {};

        vector<int> left = inorderTraversal(root->left);

        for (int x : left)
            a.push_back(x);

        a.push_back(root->val);

        vector<int> right = inorderTraversal(root->right);

        for (int x : right)
            a.push_back(x);

        return a;
    }
};