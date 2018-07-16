class Solution {
public:
    int Partition(vector<int>& nums,int left,int right){
        int i=left;int j=right-1;int temp;
        if(left<right){
            int pivot=nums[right];
            for(;;){
                while(i<j&&nums[i]>pivot) i++;
                while(i<j&&nums[j]<pivot) j--;
                if(i<j){temp=nums[i];nums[i]=nums[j];nums[j]=temp;i++;j--;}
                else break;
            }
            if(nums[i]<pivot){nums[right]=nums[i];nums[i]=pivot;}
        }
        return i;
    }
    
    
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size()==0) return 0;
        int left=0;int right=nums.size()-1;
        int p = Partition(nums,left,right);
        while(left<right){
        if(p<k-1) {left=p+1;p = Partition(nums,left,right);}
        else if(p>k-1){right=p;p = Partition(nums,left,right);}
        else {return nums[p];}
        }
        return nums[p];
    }
};