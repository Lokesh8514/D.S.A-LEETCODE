class Solution {
public:
    bool istriangle(int a,int b, int c){
        return a+b>c && b+c>a && a+c>b;
    }
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int peri=0;
        int maxperi=0;
        for(int i=nums.size()-1;i>=2;i--){
            if(istriangle(nums[i],nums[i-1],nums[i-2])){
                peri=nums[i]+nums[i-1]+nums[i-2];
                maxperi=max(maxperi,peri);
            }
        }
        return maxperi;
    }
};