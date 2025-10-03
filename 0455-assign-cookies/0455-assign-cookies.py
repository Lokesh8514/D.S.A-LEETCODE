class Solution(object):
    def findContentChildren(self, g, s):
        consent=0
        i=0
        j=0
        g.sort()
        s.sort()
        while(i<len(g) and j<len(s)):
            if(s[j]>=g[i]):
                consent+=1
                i+=1
            j+=1
        return i
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        