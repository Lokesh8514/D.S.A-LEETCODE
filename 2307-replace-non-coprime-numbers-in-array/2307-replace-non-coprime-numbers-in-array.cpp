class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int> s;
        s.push(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            int x = s.top();
            int y = nums[i];
            if (gcd(x, y) > 1) {
                while (!s.empty() && gcd(s.top(), nums[i]) > 1) {
                    int x = s.top();
                    s.pop();
                    nums[i] = lcm(x, nums[i]);
                }
                s.push(nums[i]);

            } else {
                s.push(nums[i]);
            }
        }
        int n = s.size();
        vector<int> ans(n);

        for (int i = n - 1; i >= 0 && !s.empty(); i--) {
            ans[i] = s.top();
            s.pop();
        }

        return ans;
    }
};