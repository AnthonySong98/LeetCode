class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int fast,slow;
        fast=nums[nums[0]];
        slow=nums[0];
        while(true){
            fast=nums[nums[fast]];
            slow=nums[slow];
            if(fast==slow) break;
        }
        slow=0;
        while(slow!=fast){
            fast=nums[fast];
            slow=nums[slow];
        }
        return slow;
        
    }
};