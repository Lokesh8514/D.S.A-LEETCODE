class Solution {
public:
    // int solve(string text1,string text2,int i,int j,vector<vector<int>>dp){
    //     if(i==-1||j==-1){
    //         return 0;
    //     }
    //     if(dp[i+1][j+1]!=-1){
    //         return dp[i+1][j+1];
    //     }
    //     if(text1[i]==text2[j]){
    //         dp[i+1][j+1] = 1+solve(text1,text2,i-1,j-1,dp);
    //     }
    //     else{
    //         dp[i+1][j+1]=max(solve(text1,text2,i-1,j,dp),solve(text1,text2,i,j-1,dp));
    //     }
    //     return dp[i+1][j+1];
    // }
    //  int longestCommonSubsequence(string text1, string text2) {
    //     int n=text1.length();
    //     int m=text2.length();
    //     vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    //     return solve(text1,text2,n-1,m-1,dp);
    //  }


    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                // if(i==0 ||j==0){
                //  dp[i][j]=0;
                // }
                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[n][m];
        //       return  solve(text1,text2,n-1,m-1,dp);
    }
};