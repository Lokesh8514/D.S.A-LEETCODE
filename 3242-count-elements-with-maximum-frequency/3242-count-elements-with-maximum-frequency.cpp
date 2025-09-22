class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]++;
            //    maxi=max(maxi,mp[nums[i]]->second);
            }
            mp.insert({nums[i],1});

        }
          for(auto i:mp){
            if(i.second>=maxi){
                maxi=i.second;
            }
        }
        int count=0;
        for(auto i:mp){
            if(i.second>=maxi){
                count+=i.second;
            }
        }
        return count;

    }
};