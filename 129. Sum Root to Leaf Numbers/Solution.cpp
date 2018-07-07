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
    int helper(TreeNode* node,int sum){
        if(node==NULL) return 0;
        if(node->left==NULL&&node->right==NULL){return node->val+sum*10;}
        if(node->left!=NULL||node->right!=NULL){
            return helper(node->left,sum*10+node->val)+helper(node->right,sum*10+node->val);
        }
       
    }
    
    int sumNumbers(TreeNode* root) {
        return helper(root,0);
    }
};