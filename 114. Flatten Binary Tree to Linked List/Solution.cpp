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
    void preorder(TreeNode* node,TreeNode* & linkedlist){
        if(node!=NULL){
         linkedlist->right=new TreeNode(node->val);
         //linkedlist->left=NULL;
        linkedlist=linkedlist->right;
         preorder(node->left,linkedlist);
         preorder(node->right,linkedlist);
        }
    }
    
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        TreeNode* linkedlist=new TreeNode(0);
        TreeNode* p=linkedlist;
        preorder(root,linkedlist);
        root->left=NULL;root->right=NULL;
        root->right=p;
        //root->left=p->right->right;
        if(root!=NULL&&p!=NULL&&p->right!=NULL)  root->right=p->right->right;
        if(root!=NULL&&p!=NULL&&p->right!=NULL) root->val=p->right->val;
    }
};