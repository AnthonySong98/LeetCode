class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> S;
        string res="";
        if(num.size()==0) {res='0'; return res;}
        if(num.size()==k) {res='0'; return res;}
        
        
        int i=1;
        S.push(num[0]);
        while(i<num.size()){
            while(k>0 && !S.empty()&&num[i]<S.top()){
                S.pop();
              //  S.push(num[i]);
                k--;
               // i++;
            }
           // else{
                S.push(num[i]);
                //i++;
            //}
            i++;
        }
        
        while(i<num.size()){
            S.push(num[i]);
            i++;
        }
        
        while(k>0){
            S.pop();
            k--;            
        }
        
        while(!S.empty()){
            res.push_back(S.top());
            S.pop();
        }
        
        i=0;
        while(i<res.size()){
            S.push(res[i]);
            i++;
        }
        res="";
        while(!S.empty()){
            res.push_back(S.top());
            S.pop();
        }
        
        int cnt=0;
        i=0;
        while(res[i]=='0'){
            res.erase(i,1);
        }
        if(res=="") res="0";
        return res;
        
    }
};