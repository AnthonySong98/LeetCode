class Solution:
    def findLength(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: int
        """
        
        m=len(A)
        n=len(B)
        C=[[0 for i in range(m)] for j in range(n)]
        
        for i in range(m):
            if A[i]==B[0]:
                C[i][0]=1
            else:
                C[i][0]=0
        
        for j in range(1,n):
            if B[j]==A[0]:
                C[0][j]=1
            else:
                C[0][j]=0
        
        for i in range(1,m):
            for j in range(1,n):
                if A[i]==B[j]:
                    C[i][j]=C[i-1][j-1]+1
        
        
        res=0
        for i in range(m):
            for j in range(n):
                res=max(res,C[i][j])
                
        return res
        