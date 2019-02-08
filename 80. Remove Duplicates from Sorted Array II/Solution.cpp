class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0,flag=0;
        if(nums.size()<=2) return nums.size();
        for(i=1;i<nums.size();i++){
            if(nums[i]==nums[j]&&flag==0){
                flag=1;
                nums[j+1]=nums[i];
                j++;
            }
            if(nums[i]==nums[j]&&flag!=0){
                //
            }
            if(nums[i]!=nums[j]&&flag==0){
               
                nums[j+1]=nums[i];
                 j++;
            }
            if(nums[i]!=nums[j]&&flag==1){
                nums[j+1]=nums[i];
                j++;
                flag=0;
            }
        }
        return j+1;
    }
};