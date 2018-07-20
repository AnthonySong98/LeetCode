# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def helper(self,inorder,postorder,n1,n2,m1,m2):
        if m1>m2 or n1>n2:
            return None
        i=0
        pivot = postorder[m2]
        if n1==n2:
            return TreeNode(pivot)
        i=n2
        while pivot!=inorder[i]:
            i=i-1
        tree = TreeNode(pivot)
        tree.left = self.helper(inorder,postorder,n1,i-1,m1,m2-(n2-i)-1)
        tree.right = self.helper(inorder,postorder,i+1,n2,m2-(n2-i),m2-1)
        
        return tree
    
    def buildTree(self, inorder, postorder):
        """
        :type inorder: List[int]
        :type postorder: List[int]
        :rtype: TreeNode
        """
        if len(inorder)==0:
            return None
        return self.helper(inorder,postorder,0,len(inorder)-1,0,len(inorder)-1)
        
        