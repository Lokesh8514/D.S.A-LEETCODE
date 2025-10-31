class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]++;
            }
            else
            mp[nums[i]]=1;
        }
        for(int i=0;i<mp.size();i++){
            if(mp[i]==2)
            res.push_back(i);
        }
        return res;
    }
};