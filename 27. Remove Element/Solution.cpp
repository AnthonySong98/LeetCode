class Solution {
public:
    void swaptwo(int& a,int& b){
        int t = a;
        a = b;
        b = t;
    }
    int removeElement(vector<int>& nums, int val) {
        int i = nums.size()-1; int j = i;
        if(i==-1) return 0;
        while(i>=0&&nums[i]==val) i--;
        if(i<0) {
            //for(i=0;i<=nums.size()-1;i++) nums.pop_back();
            return 0;}
        else{
        j = i;
        for(;i>=0;i--){
            if(nums[i]==val){swaptwo(nums[i],nums[j]);j--;}
        }
        
        int len = nums.size();
        //for(int k = 0;k<len-j-1;k++) nums.pop_back();
        return nums.size();
        }
    }
};