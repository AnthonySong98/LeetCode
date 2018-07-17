class Solution:
    result = []
    length = 0
    def helper(self,s,nums,pos):
        '''
        :type s: List[int]
            nums: int
            pos: int
        '''
        if (pos==self.length) :
            p=s.copy()
            self.result.append(p)
            return
        for i in range(self.length):
            if nums[i] in s:
                continue
            s.append(nums[i])
            self.helper(s,nums,pos+1)
            del(s[len(s)-1])

    
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        self.length = len(nums)
        self.result=[]
        select = []
        self.helper(select,nums,0)
        return self.result