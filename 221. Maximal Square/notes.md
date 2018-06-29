1. [problem description](https://leetcode.com/problems/maximal-square/description/)

2. 典型的dp问题，主要考虑以坐标为(i,j)为右下角而形成的最大的正方形。初始化的时候，先初始化第0行与第0列，遇到1就填1，遇到0就填0。然后按一般的先行后列的顺序扫描填表。遇到0就填0，遇到1,那么按照以下的递推公式填表：dp(i)(j)=min(dp(i-1)(j-1),dp(i-1)(j),dp(i)(j-1))+1。

3. 注意一下special case, 当输入为空[]，判断一下提前返回0，并且要注意vector的二维数组的如何取行数和列数的问题。

   ```C++
   int m=matrix.size();
   if(m==0) return 0;
   int n=matrix[0].size();
   ```