class Solution {
public:
    vector<int> partitionLabels(string S) {
        int i,j,k;vector<vector<int>> helper(2,vector<int>(26,-1));
        for(i=0;i<S.size();i++){
            if(helper[0][S[i]-'a']==-1) helper[0][S[i]-'a']=i;
            else helper[1][S[i]-'a']=max(helper[1][S[i]-'a'],i);
        }
   //     for(i=0;i<26;i++) cout<<helper[0][i]<<"->"<<helper[1][i]<<endl;
        vector<int> res(S.size(),0);
        for(i=0;i<S.size();i++){
            res[i]=helper[1][S[i]-'a']==-1?helper[0][S[i]-'a']:helper[1][S[i]-'a'];
   //         cout<<res[i]<<" ";
        }
   //     cout<<endl;
   //     for(i=0;i<S.size();i++) cout<<i<<" ";
  //      cout<<endl;
        i=0;k=0;vector<int> res1;
        while(i<S.size()){
            j=res[i];
            while(k<j){
                if(res[k]>j) {j=res[k];} 
                k++;
            }
      //      cout<<k<<" ";
            if(res1.size()==0) res1.push_back(k+1);
            else res1.push_back(k+1);
            i=k+1;
        }
        for(i=res1.size()-1;i>0;i--){
            res1[i]=res1[i]-res1[i-1];
        }
        return res1;
    }
};