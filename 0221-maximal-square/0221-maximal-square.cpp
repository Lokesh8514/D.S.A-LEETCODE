class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int ans = 0;
        int m = matrix.size();
        if (m == 0) return 0;          // handle empty matrix
        int n = matrix[0].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

        for (int i = m - 1; i >= 0; i--) {         // fix: start from m-1
            for (int j = n - 1; j >= 0; j--) {     // fix: start from n-1
                if (matrix[i][j] == '1') {
                    dp[i][j] = min({dp[i][j+1], dp[i+1][j], dp[i+1][j+1]}) + 1;  
                    // fix: use i+1 and j+1 since dp has padding
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        return ans * ans;
    }
};
