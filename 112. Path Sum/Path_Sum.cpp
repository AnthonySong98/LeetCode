/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL) return false;
        if(root->right==NULL&&root->left==NULL&&root->val==sum) return true;
        if(root->right==NULL&&root->left==NULL&&root->val!=sum) return false;
        if(root->right!=NULL) 
        { 
            if(hasPathSum(root->right,sum-root->val)) return true;
            else if(root->left!=NULL) return hasPathSum(root->left,sum-root->val);
            else return false;
        }
         else if(root->left!=NULL) return hasPathSum(root->left,sum-root->val);

        
    }
};