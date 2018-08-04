class Solution {
    public int maxProfit(int[] prices) {
        if(prices.length==0) return 0;
        int i,j,k,cur_min,cur_max_profit;
        cur_min=prices[0];cur_max_profit=0;
        for(i=0;i<prices.length;i++){
            cur_max_profit=Math.max(cur_max_profit,prices[i]-cur_min);
            cur_min=Math.min(cur_min,prices[i]);
        }
        return cur_max_profit;
    }
}