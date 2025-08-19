class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int low=0;
       int high=numbers.size()-1;
       while(low<high){
        if(numbers[low]+numbers[high]==target){
            return {low+1,high+1};
        }
        else if(numbers[low]+numbers[high]<target)
        low++;
        else
        high--;
       }
        // for(int i=0;i<numbers.size();i++){
        //     int s=i+1;
        //     int E=numbers.size()-1;
        //     int mid=s+(E-s)/2;
        //     while(s<=E){
        //         if(numbers[mid]==target-numbers[i]){
        //             return {i+1,mid+1};
        //         }
        //         else if(numbers[mid]<(target-numbers[i]))
        //         s=mid+1;
        //         else
        //         E=mid-1;
        //     mid=s+(E-s)/2;
        //     }

        // }
        return {};

    }
};