class Solution {
public:

    int triangularSum(vector<int>& nums) {
        
        int n=nums.size();
        for(int k=0;k<n-1;k++){
            vector<int>prev;
        for(int i=0;i<nums.size()-1;i++){
            int a=(nums[i]+nums[i+1])%10;
            prev.push_back(a);
        }
        nums=prev;
        }
        return nums[0];
    }
};