/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution
{
    private:
        vector<int> tree;
    public:
        vector<int> preorderTraversal(TreeNode *root)
        {
            if (root)
            {
                tree.push_back(root->val);

                preorderTraversal(root->left);
                preorderTraversal(root->right);
            }

            return tree;
        }
};