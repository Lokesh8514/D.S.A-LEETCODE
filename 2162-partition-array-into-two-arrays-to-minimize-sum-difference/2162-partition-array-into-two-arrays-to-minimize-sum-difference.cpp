class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n = nums.size(), res = 0, sum = 0;
        sum = accumulate(nums.begin(), nums.end(),0);
        
        int N = n/2;
        vector<vector<int>> left(N+1), right(N+1);
        
		//storing all possible sum in left and right part
        for(int mask = 0; mask<(1<<N); ++mask){
            int sz = 0, l = 0, r = 0;
            for(int i=0; i<N; ++i){
                if(mask&(1<<i)){
                    sz++;
                    l += nums[i];
                    r += nums[i+N];
                }
            }
            left[sz].push_back(l);
            right[sz].push_back(r);
        }

        for(int sz=0; sz<=N; ++sz){
            sort(right[sz].begin(), right[sz].end());
        }

        res = min(abs(sum-2*left[N][0]), abs(sum-2*right[N][0]));

		//iterating over left part
        for(int sz=1; sz<N; ++sz){
            for(auto &a : left[sz]){
                int b = (sum - 2*a)/2, rsz = N-sz;
                auto &v = right[rsz];
                auto itr = lower_bound(v.begin(), v.end(),b); //binary search over right part
                
                if(itr!=v.end()) res = min(res, abs(sum-2*(a+(*itr))));
                if(itr!= v.begin()){
                    auto it = itr; --it;
                    res = min(res, abs(sum-2*(a+(*it))));
                }                
            }
        }
        return res;
        
    }
};
// class Solution {
// public:
//     int minimumDifference(vector<int>& nums) {
//         int n = nums.size();
//         int tot_Sum = 0;
//         for (int num : nums)
//             tot_Sum += num;
//         tot_Sum=tot_Sum/2;
//         vector<vector<bool>> dp(n, vector<bool>(tot_Sum+1, 0));
//         for (int i = 0; i < n; i++) {
//             dp[i][0] = true;
//         }

//             // Initialize the first row based on the first element of the array
//             if (nums[0] <= tot_Sum)
//                 dp[0][tot_Sum] = true;

//             // Fill in the DP table using a bottom-up approach
//             for (int ind = 1; ind < n; ind++) {
//                 for (int target = 1; target <= tot_Sum; target++) {
//                     // Exclude the current element
//                     bool notTaken = dp[ind - 1][target];

//                     // Include the current element if it doesn't exceed the
//                     // target
//                     bool taken = false;
//                     if (nums[ind] <= target)
//                         taken = dp[ind - 1][target - nums[ind]];

//                     dp[ind][target] = notTaken || taken;
//                 }
//             }
//             int mini = 1e9;
//             for (int i = 0; i <= tot_Sum; i++) {
//                 if (dp[n - 1][i] == true) {
//                     // Calculate the absolute difference between two subset sums
//                     int diff = abs(i - (tot_Sum - i));
//                     mini = min(mini, diff);
//                 }
//             }
//             return mini;
//         }
//     };