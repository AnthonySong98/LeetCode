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


//two pointer
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i =0 ;int j =0 ;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[j] = nums[i];
                j++;
            }
        }
        int len = nums.size();
        for(i=j;i<len;i++) nums.pop_back();
        return j;
    }
};


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto it = nums.begin();
        while(it!=nums.end()){
            if(*it==val){
                nums.erase(it);
            }
            else{it++;}
        }
        return nums.size();
    }
};


