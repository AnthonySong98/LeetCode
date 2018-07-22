//二分查找，递归
class Solution {
public:
    int helper(vector<int>& nums,int left,int right){
        if(left==right) return left;
        int mid=(left+right)/2+1;
        if(nums[mid]>nums[mid-1]){return helper(nums,mid,right); }
        if(nums[mid]<nums[mid-1]){return helper(nums,left,mid-1); }
        
    }
    
    int findPeakElement(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};
//二分查找，非递归
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0;int right=nums.size()-1;int mid;
        while(left<right){
            mid=(left+right)/2+1;
            if(nums[mid]>nums[mid-1]) left=mid;
            else right=mid-1;
        }
        return left;
    }
};