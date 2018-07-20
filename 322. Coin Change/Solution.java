class Solution {
    public int coinChange(int[] coins, int amount) {
        int i;int k;
        for(k=0;k<coins.length;k++){
            for(i=k+1;i<coins.length;i++){
                if(coins[i]==coins[k]) coins[i]=0;
            }
        }
        int cnt=0;
        for(k=0;k<coins.length;k++){
            if(coins[k]!=0) cnt++;
        }
        
        int [] arr= new int[cnt];int p=0;
        for(i=0;i<coins.length;i++){
           if(coins[i]!=0) { arr[p]=coins[i];  p++;}
        }
        
        coins = null;
        coins = new int[arr.length];
        for(i=0;i<arr.length;i++){
           coins[i] = arr[i];
        }
        
        Arrays.sort(coins);
        
        System.out.println(coins[0]);
            
            
            int[] dp = new int[amount+1];
        dp[0]=0;int tag=0;
        int j;
        for(i=1;i<dp.length;i++){
            dp[i] = Integer.MAX_VALUE-1; 
        }
        for(i=0;i<coins.length;i++){
           if(coins[i]<=amount) dp[coins[i]] = 1;
            else continue;
        }

        for(i=1;i<=amount;i++){
            if(1==dp[i]) {tag++;continue;}
            for(j=0;j<tag;j++){
                dp[i]=Math.min(dp[i-coins[j]]+1,dp[i]);
            }
        }
        return (dp[amount]==Integer.MAX_VALUE-1)?-1:dp[amount];
    }
}