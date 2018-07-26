class Solution {
public:
    void helper(vector<vector<int>>& res,vector<int>& nums,vector<int> s,int n){
        if(n==nums.size()){
            res.push_back(s);
            s.clear();
            return ;
        }
        else{
            for(int i=0;i<=1;i++){
                if(i==1) s.push_back(nums[n]);
                helper(res,nums,s,n+1);
            }
            
        }
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> s;
        helper(res,nums,s,0);
        return res;
    }
};