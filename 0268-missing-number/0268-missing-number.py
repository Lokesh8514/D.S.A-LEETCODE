class Solution(object):
    def missingNumber(self, nums):
        nums.sort()
        n=len(nums)
        for i in range(0,n):
            if(nums[i]!=i):
                return i
        return n
        """
        :type nums: List[int]
        :rtype: int
        """
        