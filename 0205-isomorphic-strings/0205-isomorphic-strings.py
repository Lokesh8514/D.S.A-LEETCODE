class Solution(object):
    def isIsomorphic(self, s, t):
        m1=[0]*256
        m2=[0]*256
        for i in range(0,len(s)):
            if m1[ord(s[i])]!= m2[ord(t[i])]:
                return False
            m1[ord(s[i])]=i+1
            m2[ord(t[i])]=i+1
        return True
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        