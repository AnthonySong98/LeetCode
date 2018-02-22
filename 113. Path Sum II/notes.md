1. [problem description](https://leetcode.com/problems/path-sum-ii/description/)
2. `s.push_back(node->val);`先上来就把node的值放进去，不管到底应该有没有，因为即使没有，后面的到叶结点时，判定到底该不该把这条路放进解里的时候就可以排除掉了。
3. `if(node->right==NULL&&node->left==NULL&&sum==node->val) result.push_back(s);`非常精妙，既保证了叶结点又保证了和正确。
4. `void helper(TreeNode* node, int sum,vector<int> s ,vector<vector<int>>&result)`helper注意，`vector<int> s`不要用引用传值，因为它递归每次会变。
