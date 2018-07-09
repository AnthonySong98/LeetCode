/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    void linkedlist2vector(ListNode* head,vector<int> &a)
    {
        ListNode* p=head;int i=0;
        while(p!=NULL){a[i]=p->val;i++;p=p->next;}
    }
    
    TreeNode* sortedvector2BST(vector<int> a,int left,int right){
        if(left==right){ TreeNode* newnode=new TreeNode(a[left]); return newnode;  }
        if(left==right-1){ TreeNode* newnode=new TreeNode(a[right]); 
                          newnode->left=new TreeNode(a[left]); 
                          return newnode;  }
        else {int mid=(left+right)/2;
        TreeNode* tree=new TreeNode(a[mid]);
        tree->left=sortedvector2BST(a,left,mid-1);
        tree->right=sortedvector2BST(a,mid+1,right);
        return tree;}
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* p=head;int i=0;while(p!=NULL){i++;p=p->next;}
        if(i==0) return NULL;
        vector<int> a(i);
        linkedlist2vector(head,a);
        return sortedvector2BST(a,0,a.size()-1);
    }
};