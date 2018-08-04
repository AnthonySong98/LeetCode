class Solution {
    public boolean checkPossibility(int[] nums) {
        int cnt=0;int i;
        for(i=0;i<nums.length-1;i++){
            if(nums[i]>nums[i+1]){
                cnt++;
            }
        }
        if(cnt==0) return true;
        if(cnt>1) return false;
        for(i=0;i<nums.length-1;i++){
            if(nums[i]>nums[i+1]) break;
        }
        if(i==0||i==nums.length-2) return true;
        else if(nums[i-1]<=nums[i+1]||nums[i]<=nums[i+2]) return true;
        else return false;
        
    }
}