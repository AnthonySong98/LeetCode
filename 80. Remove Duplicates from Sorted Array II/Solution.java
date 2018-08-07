class Solution {
    public int removeDuplicates(int[] nums) {
        int i,j;
        for(i=0,j=0;i<nums.length;i++){
            if(i<=1||nums[i]>nums[j-2]){nums[j]=nums[i];j++;}
        }
        return j;
    }
}