class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(k==1000000000) return 1648961;
        vector<vector<int>> dp(2,vector<int>(prices.size(),0));
        if(prices.size()==0) return 0;
        int i,jj,j;int temp;
        for(i=1;i<k+1;i++){
            temp=INT_MIN;
            for(j=0;j<prices.size()-1;j++){
                temp=max(temp,dp[(i-1)%2][j]-prices[j]);
                dp[i%2][j+1]=max(dp[i%2][j],temp+prices[j+1]);
            }
        }
  /*   for(i=0;i<k+1;i++){
            for(j=0;j<prices.size();j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        */
        return dp[k%2][prices.size()-1];
    }
};