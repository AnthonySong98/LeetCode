class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;int i=0;
        while(i<nums.size()) { int temp=nums[nums[i]-1];nums[nums[i]-1]=nums[i];nums[i]=temp;
                                      //  if(nums[i]==nums[nums[i]-1]) res.push_back(nums[i]);
                              i++;
                                        }
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=j+1) res.push_back(nums[j]);
        }
           // else if(i!=nums[i]-1) res.push_back(nums[i]);
        
        return res;
    }
};