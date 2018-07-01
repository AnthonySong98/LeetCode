class Solution {
public:
    int minSwap(vector<int>& A, vector<int>& B) {
        vector<int> swap(A.size(),INT_MAX);
        vector<int> nonswap(A.size(),INT_MAX);
        swap[0]=1;nonswap[0]=0;
        int i=1;
        while(i<A.size()){
            if(A[i]>A[i-1]&&B[i]>B[i-1]){
                swap[i]=swap[i-1]+1;//两个都swap一下
                nonswap[i]=nonswap[i-1];//两个都不换
            }
            if(A[i]>B[i-1]&&B[i]>A[i-1]){
                swap[i]=min(swap[i],nonswap[i-1]+1);
                nonswap[i]=min(nonswap[i],swap[i-1]);
            }
            i++;
        }
        return min(swap.back(),nonswap.back());
    }
};