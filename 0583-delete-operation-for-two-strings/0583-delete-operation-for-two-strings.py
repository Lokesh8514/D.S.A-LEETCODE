class Solution(object):
    def minDistance(self, word1, word2):
        n=len(word1)
        m=len(word2)
        prev=[0 for i in range(m+1)]
        curr=[0 for i in range(m+1)]
        for i in range(1,n+1):
            for j in range(1,m+1):
                if(word1[i-1]==word2[j-1]):
                    curr[j]=prev[j-1]+1
                else:
                    curr[j]=max(curr[j-1],prev[j])
            prev=curr[:]
        return (n+m)-2*prev[m]
        """
        :type word1: str
        :type word2: str
        :rtype: int
        """
        