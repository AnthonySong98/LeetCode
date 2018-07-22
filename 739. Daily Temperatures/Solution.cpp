class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<int> S;vector<int> res(temperatures.size(),0);
        if(temperatures.size()==0) return res;
        S.push(temperatures[0]);int i=1;
        stack<int> S_index;
        S_index.push(0);
        while(!S.empty()&&i<temperatures.size()){
            while(!S.empty()&&temperatures[i]>S.top()){
                S.pop();res[S_index.top()]=i-S_index.top();S_index.pop();
            }
            S.push(temperatures[i]);S_index.push(i);
            i++;
        }
        
        
        return res;
    }
};