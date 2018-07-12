class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        vector<int> dpmax(nums.size(),0);
        vector<int> dpmin(nums.size(),0);
        int i=0;int maxproduct=nums[0];
        dpmax[0]=nums[0];
        dpmin[0]=nums[0];
        for(i=1;i<nums.size();i++){
            dpmax[i]=max(max(dpmin[i-1]*nums[i],dpmax[i-1]*nums[i]),nums[i]);
            dpmin[i]=min(min(dpmin[i-1]*nums[i],dpmax[i-1]*nums[i]),nums[i]);
            maxproduct=max(maxproduct,max(dpmax[i],dpmin[i]));
        }
        return maxproduct;
        
    }
};