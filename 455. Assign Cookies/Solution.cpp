class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());
        int i,j,cnt;
        j=0;cnt=0;
        if(s.size()==0) return cnt;
        for(i=0;i<g.size();i++){
            if(j==s.size()) break;
            if(g[i]<=s[j]){cnt++;j++;}
            
        }
        
        return cnt;
    }
};