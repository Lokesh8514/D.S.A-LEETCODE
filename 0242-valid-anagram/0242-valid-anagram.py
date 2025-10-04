class Solution(object):
    def isAnagram(self, s, t):
        h=[0]*26
        for i in range(len(s)):
            h[ord(s[i])-ord('a')]+=1
        for i in range(len(t)):
            h[ord(t[i])-ord('a')]-=1
        for i in h:
            if i!=0:
                return False
        return True
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        