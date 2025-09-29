class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxcount1=0;
        int maxcount2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            count++;
            else if(nums[i]==0){
                maxcount1=max(count,maxcount1);
                count=0;
            }
            // if(maxcount<count);
            // maxcount=count;
        }
        
             maxcount2=count;
             int ans=max(maxcount1,maxcount2);
        
        return ans;
        
    }
};