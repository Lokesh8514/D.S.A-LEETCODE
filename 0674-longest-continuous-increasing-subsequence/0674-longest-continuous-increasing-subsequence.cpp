class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
     int s=0;
     int e=0;
     int count=0;
     int maxcount=INT_MIN;
     if(nums.size()<=1)
     return nums.size();
     for(int i=1;i<nums.size();i++){
      
         if(nums[i]<=nums[i-1]){
            e=i-1;
            count=e-s+1;
            maxcount=max(count,maxcount);
            s=i;
        }
        else if(i==nums.size()-1){
            e=i;
            count=e-s+1;
            maxcount=max(count,maxcount);
            s=i;
        }
     }
     return maxcount;
    }
};