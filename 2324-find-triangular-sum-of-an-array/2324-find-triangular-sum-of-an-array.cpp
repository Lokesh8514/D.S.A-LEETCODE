class Solution {
public:

    int triangularSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>prev;
        for(int k=0;k<n-1;k++){

        for(int i=0;i<nums.size()-1;i++){
            int a=(nums[i]+nums[i+1])%10;
            prev.push_back(a);
        }
        nums=prev;
        prev.clear();
        }
        return nums[0];
    }
};