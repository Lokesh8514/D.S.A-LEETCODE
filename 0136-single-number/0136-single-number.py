class Solution(object):
    def singleNumber(self, nums):
        ans=0
        for i in nums:
            ans^=i
        return ans
        """
        :type nums: List[int]
        :rtype: int
        """
        