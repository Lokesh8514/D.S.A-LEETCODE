class Solution {
public:
    void solve(int i, vector<int> nums, vector<int> ans,vector<vector<int>>& res) {
        if (i == nums.size()) {
            res.push_back(ans);
            return;
        } else {
            // exclude
            solve(i + 1, nums, ans, res);
            // include
            ans.push_back(nums[i]);
            solve(i + 1, nums, ans, res);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> res;
        solve(0, nums, ans, res);
        return res;
    }
};