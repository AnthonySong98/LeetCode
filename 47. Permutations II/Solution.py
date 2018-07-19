#47. Permutations II

class Solution:
    result = []
    length = 0
    def helper(self,s,nums,used):
        '''
        :type s: List[int]
            nums: int
            pos: int
        '''
        if (len(s)==self.length) :
            p=s.copy()
            self.result.append(p)
            return
        for i in range(self.length):
            if used[i] or i>0 and nums[i]==nums[i-1] and not used[i-1]:
                continue
            used[i] = True
            s.append(nums[i])
            self.helper(s,nums,used)
            used[i] = False
            del(s[len(s)-1])

    
    def permuteUnique(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums.sort()
        self.length = len(nums)
        self.result=[]
        select = []
        used = [False for i in range(len(nums))]
        self.helper(select,nums,used)
        print(len(self.result))