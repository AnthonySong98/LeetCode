class Solution {
public:
    int getMoneyAmount(int n) {
         int**table = new int*[n+1];
        for(int p=0;p<n+1;p++) table[p]=new int[n+1];
        for(int j=2; j<=n; j++){
            for(int i=j-1; i>0; i--){
                int globalMin = 100000;
                for(int k=i+1; k<j; k++){
                    int localMax = k + max(table[i][k-1], table[k+1][j]);
                    globalMin = min(globalMin, localMax);
                }
                table[i][j] = i+1==j?i:globalMin;//如果相邻的话，肯定取小的数，这其实是边界条件
            }
        }
        return table[1][n];
    }
};