class Solution(object):
    def longestPalindromeSubseq(self, s):
        s2=s[::-1]
        n=len(s)
        prev=[0 for i in range(n+1)]
        curr=[0 for i in range(n+1)]
        for i in range(1,n+1):
            for j in range(1,n+1):
                if(s[i-1]==s2[j-1]):
                    curr[j]=prev[j-1]+1
                else:
                    curr[j]=max(curr[j-1],prev[j])
            prev=curr[:]
        return prev[n]
        """
        :type s: str
        :rtype: int
        """
        