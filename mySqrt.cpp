#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int mySqrt(int x);
int main(int argc, char const *argv[])
{
	/* code */
	int left=22,right=29;
   cout<<mySqrt(left);
    //selfDividingNumbers(left,right);
	return 0;
}

 int mySqrt(int x) {
        double a=3;
        while(abs(a-sqrt(x))>0.0005) a=(a+x/a)/2;
        return int(a);
        //牛顿法
    }