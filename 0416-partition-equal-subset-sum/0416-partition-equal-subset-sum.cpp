class Solution {
public:
    bool solve(int n,int k,vector<int>&nums){
        vector<bool>prev(k+1);
        vector<bool>curr(k+1);
        prev[0]=curr[0]=true;
        if(nums[0]<=k)
        prev[nums[0]]=true;
        for(int i=1;i<n;i++){
            for(int target=1;target<=k;target++){
                bool exclude=prev[target];
                bool include=false;
                if(nums[i]<target){
                    include=prev[target-nums[i]];
                }
                curr[target]=exclude||include;
                
            }
            prev=curr;
        }
        return prev[k];
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int total_sum=0;
        for(int i=0;i<n;i++){
            total_sum+=nums[i];
        }
        if(total_sum % 2!=0)
        return false;
        bool ans=solve(n,total_sum/2,nums);
        return ans;
    }
};