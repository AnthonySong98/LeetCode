//Given a set of distinct integers, nums, return all possible subsets (the power set).
//#78 Subsets

class Solution {
public:
    std::vector<std::vector<int> > subsets(std::vector<int> &nums) {
		std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int> > res;
		std::vector<int> vec;
		subsets(res, nums, vec, 0);
		return res;
    }
private:
	void subsets(std::vector<std::vector<int> > &res, std::vector<int> &nums, std::vector<int> &vec, int begin) {
		res.push_back(vec);
		for (int i = begin; i != nums.size(); ++i) {
			vec.push_back(nums[i]);
			subsets(res, nums, vec, i + 1);
			vec.pop_back();
		}
	}
};

//Given a collection of integers that might contain duplicates, nums, return all possible subsets (the power set).
//#90. Subsets II


class Solution {
private:
	void backtracking(std::vector<std::vector<int> > &res, std::vector<int> &nums, std::vector<int> &vec, int begin) {
		res.push_back(vec);
		for (int i = begin; i != nums.size(); ++i) {
            if(i==begin||nums[i]!=nums[i-1])
			{
                vec.push_back(nums[i]);
			    backtracking(res, nums, vec, i + 1);
			    vec.pop_back();
            }
		}
	}
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>> res;
        vector<int> s;
        backtracking(res,nums,s,0);
        return res;
    }
};