class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
       int mid=(s+e)/2;
        int index=-1;
        while(s<=e){
            if(nums[mid]==target){
            index=mid;
            break;}

            else if(nums[mid]<target)
            s=mid+1;
            else 
            e=mid-1;

        mid=s+(e-s)/2;
           
        }
      return index;
        
    
    }
};