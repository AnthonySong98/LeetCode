//直接类似Floyd算法求出所有两点之间的最有解
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        int m=flights.size();if(m==0) return 0;
        int dp[K+1][n][n];
        int i,j,k,p;int temp=1000001;
        for(i=0;i<K+1;i++)
            for(j=0;j<n;j++)
                for(k=0;k<n;k++)
                    dp[i][j][k]=1000001;
        
        for(i=0;i<m;i++){dp[0][flights[i][0]][flights[i][1]]=flights[i][2];}
        for(k=0;k<K;k++)
        {
            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                {
                    temp=1000001;
                    for(p=0;p<n;p++){
                        temp=min(temp,dp[k][i][p]+dp[0][p][j]);
                    }
                dp[k+1][i][j]=min(dp[k][i][j],temp);
            }
        }
        return (dp[K][src][dst]==1000001)?-1:dp[K][src][dst];
    }
};


//只考虑从源点出发的最有解，同时只更新flights数组里的边
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        int m=flights.size();
        if(m==0) return 0;
        int dp[K+1][n];
        int i,j,k,p;int temp=1000001;
        for(i=0;i<K+1;i++)
            for(j=0;j<n;j++)
                dp[i][j]=100001;
        
        for(k=0;k<K+1;k++)
            for(i=0;i<flights.size();i++)
            {
                if(k==0) {if(flights[i][0]==src) dp[0][flights[i][1]]=flights[i][2];}
               else dp[k][flights[i][1]]=min(dp[k][flights[i][1]],min(dp[k-1][flights[i][1]],dp[k-1][flights[i][0]]+flights[i][2]));
            }
        return (dp[K][dst]==100001)?-1:dp[K][dst];
        
    }
};
