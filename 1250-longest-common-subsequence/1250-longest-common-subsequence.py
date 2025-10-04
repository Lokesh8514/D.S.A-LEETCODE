class Solution(object):
    def longestCommonSubsequence(self, text1, text2):
        n=len(text2)
        k=len(text1)
        dp = [[0 for _ in range(k + 1)] for _ in range(n + 1)]
        for i in range(1,n+1):
            for j in range(1,k+1):
                if(text1[j-1]==text2[i-1]):
                    dp[i][j]=dp[i-1][j-1]+1
                else:
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j])
        
        return dp[n][k]

        """
        :type text1: str
        :type text2: str
        :rtype: int
        """
        