class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int res=0;
        int num=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1]) 
            {
                num++;
            }
            else
            {
                res=max(res,num);
                num=1;
            }
        }
        res=max(res,num);
        return res;
    }
};