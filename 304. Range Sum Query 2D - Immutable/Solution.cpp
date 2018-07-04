class NumMatrix {
public:
    NumMatrix(vector<vector<int>> matrix) {
        int n=matrix.size();if(n==0) {helper=matrix;}
        else{
            int m=matrix[0].size();
        
        vector<vector<int>> dp(n,vector<int>(m));
        dp[0][0]=matrix[0][0];
        int i,j,k;
        for(i=1;i<m;i++) dp[0][i]=dp[0][i-1]+matrix[0][i];
        for(j=1;j<n;j++) dp[j][0]=dp[j-1][0]+matrix[j][0];
        for(i=1;i<n;i++)
            for(j=1;j<m;j++)
            {
                dp[i][j]=dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1]+matrix[i][j];
            }
        helper.clear();
        helper=dp;//传值的时候先用matrix撑个骨架
      //  for(i=0;i<n;i++)
       //     for(j=0;j<n;j++)
      //      {
      //          helper[i][j]=dp[i][j];
       //     }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        if(row1>0&&col1>0&&row2>0&&col2>0)
        return helper[row2][col2]-helper[row2][col1-1]-helper[row1-1][col2]+helper[row1-1][col1-1];
        else if(row1==0&&col1>0) return helper[row2][col2]-helper[row2][col1-1];
        else if(row1>0&&col1==0) return helper[row2][col2]-helper[row1-1][col2];
        else if(row1==0&&col1==0) return helper[row2][col2];
        else return 0;
    }
    
 private:
    vector<vector<int>> helper;
   
      
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = new NumMatrix(matrix);
 * int param_1 = obj.sumRegion(row1,col1,row2,col2);
 */