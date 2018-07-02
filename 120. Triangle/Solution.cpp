//2D dp
#define MAX_INT 999999
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();if(n==0) return 0;
        vector<vector<int>> dp(n,vector<int>(n,MAX_INT));
        dp[0][0]=triangle[0][0];
        int i,j,k;
        for(i=1;i<n;i++)
        {
            for(j=0;j<i+1;j++)
            {
                if(j==0){dp[i][j]=triangle[i][j]+dp[i-1][j];}
                else{dp[i][j]=triangle[i][j]+min(dp[i-1][j-1],dp[i-1][j]);}
            }
        }
        int res=MAX_INT;
        for(k=0;k<n;k++)
            res=min(res,dp[n-1][k]);
        return res;
    }
};


//1D dp
#define MAX_INT 999999
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();if(n==0) return 0;
        if(n==1) return triangle[0][0];
        vector<int> dp(n+2,MAX_INT);dp[n]=triangle[0][0];
        int k,i;
        for(k=0;k<=n-2;k++)
            for(i=n-k;i<=n+1;i++)
                dp[i-1]=min(dp[i-1],dp[i])+triangle[k+1][i-n+k];
        int res=INT_MAX;
        for(i=0;i<n+2;i++) res=min(res,dp[i]);
        return res;
    }
};
