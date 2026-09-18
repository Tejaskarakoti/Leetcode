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

  int check(TreeNode* root,int &mx){
    if(root==NULL)return 0;
    int lh =check(root->left,mx) ;
    int rh= check(root->right,mx);
    mx = max(lh+rh,mx);

    return 1+max(lh,rh);

  }
    int diameterOfBinaryTree(TreeNode* root) {
        int mx=0;
         check(root,mx);
         return mx;
    
;
    }
};