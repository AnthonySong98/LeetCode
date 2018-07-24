class Solution {
public:
    int numSquares(int n) {
        if(n==0) return 0;
        vector<int> dp(n+1,INT_MAX-1);
        int i,j;
        for(i=1;i<=n;i++){
           int s_i = int(sqrt(i));
            if(s_i * s_i == i) dp[i]=1;
           else{ for(j=1;j<=s_i;j++){
                dp[i] = min(dp[i],1+dp[i-j*j]);
            }
               }
        }
        return dp[n];
    }
};