class Solution {
public:
    int helper(vector<int>& nums, int S){
        vector<int> dp(S+1,0);
        dp[0]=1;
        for(int i=0;i<nums.size();i++)
            for(int j=S;j>=nums[i];j--)
               dp[j]+=dp[j-nums[i]];
        return dp[S];
       
    }
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum=0;
        for(int i=0;i<nums.size();i++) sum+=nums[i];
        int p=(S+sum)/2;
        if(((S+sum))%2!=0||sum<S) return 0;    
        else return helper(nums,p);
    }
};