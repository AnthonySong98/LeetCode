class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,j;i=0;j=0;
        if(s.size()==0) return true;
        while(i<s.size()){
            while(j<t.size()&&s[i]!=t[j]){
                j++;
            }
            if(j<t.size()){i++;cout<<s[i-1];j++;}
            if(i==s.size()) return true;
            if(j==t.size()) break;
        }
        return false;
    }
};