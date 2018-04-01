#include <iostream>
#include<cmath>
#include<string>
using namespace std;

 int LCS_Length(string & X,string & Y) {
       int m=X.length();
       int n=Y.length();
       int dp[m+1][n+1];
       int i=0;int j=0;
       for(i=1;i<=m;i++) dp[i][0]=0;
        for(j=0;j<=m;j++) dp[0][j]=0;
        for(i=1;i<=m;i++)
            for(j=1;j<=n;j++)
            {
                if(X[i-1]==Y[j-1]) dp[i][j]=dp[i-1][j-1]+1;
                else if(dp[i-1][j]>=dp[i][j-1]) dp[i][j]=dp[i-1][j];
                else dp[i][j]=dp[i][j-1];
            }

            return dp[m][n];
    }

string Palindromic(string & A){
    string res(A);
    int n=A.length();
    for(int i=0;i<n;i++)
      res[i]=A[n-1-i];
    return res;
}

int main()
{
    string A="cbbd";string B="dbbc";
    //B=Palindromic(A);
    cout<<LCS_Length(A,B)<<endl;
    return 0;
}