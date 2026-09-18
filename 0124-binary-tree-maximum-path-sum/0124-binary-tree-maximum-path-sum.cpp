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
class Solution {
public:
int mx= INT_MIN;
int check(TreeNode* root){
    if(root==NULL)return 0;
    int lh =check(root->left);

    int rh= check(root->right);
    lh = max(0, lh);
        rh = max(0, rh);
    mx = max(lh+rh +root->val,mx);

    return (root->val)+max(lh,rh);}

    int maxPathSum(TreeNode* root) {
        check(root);
         return mx;
    }

};