#include <iostream>
#include<cmath>
using namespace std;

 int integerBreak(int n) {
       int* dp=new int[n+1];

       dp[1]=1;
        dp[2]=2;dp[3]=3;dp[4]=4;
        if(n==2) return 1;
        if(n==3) return 2;
        if(n==4) return 4;
        
        int i,j;
        for(j=5;j<n+1;j++)
        {    dp[j]=0;
        for(i=1;i<=j/2;i++)
            if(dp[i]*dp[j-i]>dp[j]) dp[j]=dp[i]*dp[j-i];
    }
        return dp[n];
    }

int main()
{
    cout<<integerBreak(13)<<endl;
    return 0;
}