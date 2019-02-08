class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;int t;
        if(nums.size()==0) return 0;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=nums[j]){
                //t = nums[i];
                //nums[i]=nums[j+1];
                nums[j+1] = nums[i];
                j = j + 1;
            }
        }
        return j + 1;
    }
};