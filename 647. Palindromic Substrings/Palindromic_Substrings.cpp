class Solution {
public:
    int check(string& s,int i,int j){//从中间检验回文与否
        int k=0;
        while(i>=0&&j<s.size()&&s[i]==s[j]){k++;i--;j++;}
        return k;
    } 
    int countSubstrings(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            res+=check(s,i,i); 
            res+=check(s,i,i+1);
        }
        return res;
    }
    
};