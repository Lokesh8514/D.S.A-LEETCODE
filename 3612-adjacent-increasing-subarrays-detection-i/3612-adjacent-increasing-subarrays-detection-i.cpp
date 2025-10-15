class Solution {
public:
    bool isstrictlyincreasing(int i,int k,vector<int>&nums){
        int n=nums.size();
        for(int j=i;j<i+k-1;j++){
            if(nums[j]>=nums[j+1])
            return false;
        }
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<2*k) return false;
        for(int i=0;i<n-(2*k)+1;i++){
            if(isstrictlyincreasing(i,k,nums)&&isstrictlyincreasing(i+k,k,nums))
            return true;
           
        }
        return false;
        
    }
};