class Solution {
public:
    void helper(vector<vector<int>>& res,vector<int> &s,int p,int n, int k){
        if(s.size()==k) {res.push_back(s);return;}
        else
        {
            for(int i=p;i<=n;i++)
            {
                s.push_back(i);
                helper(res,s,i+1,n,k);
                s.erase(s.end()-1);
            }
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> s;
        helper(res,s,1,n,k);
        return res;
    }
};