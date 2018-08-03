class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0;int j=0;flowerbed.push_back(0);flowerbed.push_back(1);
        while(j<flowerbed.size()&&flowerbed[j]==0) j++;
        int cnt=(j)/2;
        while(j<flowerbed.size()){
        i=j;j++;
        while(j<flowerbed.size()&&flowerbed[j]==0) j++;
        cnt+=(j-i-2)/2;
        }
        cout<<cnt;
        return cnt>=n?true:false;
    }
};