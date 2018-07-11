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
     TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int m1,int m2,int n1,int n2){
        // int m=preorder.size();int n=inorder.size();
         
        // if(m1==m2) {reeNode* tree=new TreeNode(pivot); }
         if(m1>m2||n1>n2) return NULL;
         int i,j,k;
         int pivot=preorder[m1];
         if(m1==m2) {TreeNode* tree=new TreeNode(pivot);  return tree;}
         
         
         i=n1;
         while(pivot!=inorder[i]){i++;}
        // m2=m1+i-n1;m1=m1+1;
        // n2=i-1;
         
         TreeNode* tree=new TreeNode(pivot);
         tree->left=helper(preorder,inorder,m1+1,m1+i-n1,n1,i-1);
         tree->right=helper(preorder,inorder,m1+i-n1+1,m2,i+1,n2);
         
         return tree;
         
         
     }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0) return NULL;
        return helper(preorder,inorder,0,preorder.size()-1,0,preorder.size()-1);
    }
};