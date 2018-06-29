class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        if(m==0) return 0;
        int n=matrix[0].size();
        int dp[m][n]={0};
        //dp[0][0]=(matrix[0][0]=='1')?1:0;
        int i;int j;
        for(j=0;j<n;j++) dp[0][j]=(matrix[0][j]=='1')?1:0;
        for(i=0;i<m;i++) dp[i][0]=(matrix[i][0]=='1')?1:0;
        for(i=1;i<m;i++){
            for(j=1;j<n;j++){
                if(matrix[i][j]=='0') dp[i][j]=0;
                else{
                    dp[i][j]=min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1])+1;
                }
            }
        }
        int maxarea=0;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                maxarea=max(maxarea,(dp[i][j])*(dp[i][j]));
        return maxarea;
    }
};