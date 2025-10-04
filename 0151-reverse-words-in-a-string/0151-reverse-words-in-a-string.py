class Solution(object):
    def reverseWords(self, s):
        s=s.strip()
        mylist=s.split()
        ans = " ".join(mylist[::-1])
        return ans
        """
        :type s: str
        :rtype: str
        """
        