class Solution(object):
    def shortestCommonSupersequence(self, str1, str2):
        n=len(str1)
        m=len(str2)
        dp = [[0 for _ in range(m + 1)] for _ in range(n + 1)]

        for i in range(1,n+1):
            for j in range(1,m+1):
                if(str1[i-1]==str2[j-1]):
                    dp[i][j]=dp[i-1][j-1]+1
                else:
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j])
        
        ans= dp[n][m]
        i=n
        j=m
        index=ans-1
        ansstr=""
        
        while i>0 and j>0:
            if(str1[i-1]==str2[j-1]):
                ansstr+=str1[i-1]
                index-=1
                i-=1
                j-=1
            elif(dp[i-1][j]>dp[i][j-1]):
                ansstr+=str1[i-1]
                i-=1
            else:
                ans+=str2[j-1]
                j-=1
        while i>0:
            ansstr+=str1[i-1]
            i-=1
        while j>0:
            ansstr+=str2[j-1]
            j-=1
        return ansstr[::-1]

            
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        