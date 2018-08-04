class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int k=2;
         vector<vector<int>> dp(k+1,vector<int>(prices.size(),0));
        if(prices.size()==0) return 0;
        int i,jj,j;int temp;
        for(i=1;i<k+1;i++){
            temp=INT_MIN;
            for(j=0;j<prices.size()-1;j++){
                temp=max(temp,dp[i-1][j]-prices[j]);
                dp[i][j+1]=max(dp[i][j],temp+prices[j+1]);
            }
        }
  /*   for(i=0;i<k+1;i++){
            for(j=0;j<prices.size();j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        */
        return dp[k][prices.size()-1];
    }
};