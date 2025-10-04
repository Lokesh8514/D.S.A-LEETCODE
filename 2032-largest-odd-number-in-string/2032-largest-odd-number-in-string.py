class Solution(object):
    def largestOddNumber(self, num):
        i=len(num)-1
        even=["0","2","4","6","8"]
        while(i>=0):
            if num[i] not in even:
                return num[:i+1]
            i-=1
        return ""
        """
        :type num: str
        :rtype: str
        """
        