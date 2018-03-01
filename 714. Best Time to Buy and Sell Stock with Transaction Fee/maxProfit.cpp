class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int s0=0;//profit on the conditoin that no stock at current
        int s1=-1000000;//profits on the conditoin that one stock at current,help to run at some begining iterations
        for(int i=0;i<prices.size();i++){
            int temp=s0;
            s0=max(s0,s1+prices[i]);
            s1=max(s1,temp-fee-prices[i]);
        }
        return s0;//at last no stock left;
    }
};