class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> helper(arr.size());int curmax=arr[0];helper[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>curmax){curmax=arr[i];}
             helper[i]=curmax;
        }
       
        int res=0;int cur=helper[0];
        for(int j=0;j<helper.size();j++)
        {
            if(helper[j]==j){res++;}
        }
        return res;
    }
};