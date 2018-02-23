class Solution {
public:
    int climbStairs(int n) {
       if(n==1) return 1;
       if(n==2)  return 2;
       // else return(climbStairs(n-1)+climbStairs(n-2));
        int a=1,b=2;int t;
        while(n>=3){
            a=a+b;
            t=a;
            a=b;
            b=t;
            n--;
        }
        return b;
        
    }
};