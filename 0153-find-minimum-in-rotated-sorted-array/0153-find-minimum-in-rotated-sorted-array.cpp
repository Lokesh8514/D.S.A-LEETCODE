class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int min=nums[0];
        while(s<=e){
            if(nums[mid]>nums[s]&&nums[mid]>nums[e]){
            s=mid+1;
            }
            else if(nums[mid]<=nums[s]&&nums[mid]>nums[e]){
                s=mid+1;
                if(min>nums[mid])
                min=nums[mid];
            }
            else{
                e=mid-1;
                if(min>nums[mid])
                min=nums[mid];
            }
             mid=s+(e-s)/2;
        }
        return min;
    }
};