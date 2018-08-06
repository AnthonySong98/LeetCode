class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     
     sort(nums.begin(),nums.end());
     vector<vector<int>> res;
     if(nums.size()<3) return res;
     int i,j,k;int remain;
     
     for(i=0;i<nums.size()-2;i++){
        if (i == 0 || (i > 0 && nums[i] != nums[i-1]))
         { remain = -nums[i];
            j=i+1;k=nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k]==remain){vector<int> t;

                    {t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[k]);
                        res.push_back(t);}
                        while(j<k&&nums[j]==nums[j+1])j++;
                        while(j<k&&nums[k]==nums[k-1])k--;
                        j++;       k--;        }
                        if(nums[j]+nums[k]<remain) j++;
                        if(nums[j]+nums[k]>remain) k--;
                    }
                    
                }
            }
            return res;
        }
    };