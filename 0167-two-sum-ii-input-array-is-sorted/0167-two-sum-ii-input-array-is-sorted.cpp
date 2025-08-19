class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int e=0;
        // for(int i=0;i<numbers.size();i++){
        //     if(numbers[i]>=target){
        //         e=i;
        //         break;
        //     }
        // }
        for(int i=0;i<numbers.size();i++){
            int s=i+1;
            int E=numbers.size()-1;
            int mid=s+(E-s)/2;
            while(s<=E){
                if(numbers[mid]==target-numbers[i]){
                    return {i+1,mid+1};
                }
                else if(numbers[mid]<(target-numbers[i]))
                s=mid+1;
                else
                E=mid-1;
            mid=s+(E-s)/2;
            }

        }
        return {};

    }
};