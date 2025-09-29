class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        maxcount=0
        count=0
        n=len(nums)
        for i in range(0,len(nums)):
            if(nums[i]==1):
                count+=1
            else:
                maxcount=max(count,maxcount)
                count=0
        return max(maxcount,count)
        """
        :type nums: List[int]
        :rtype: int
        """
        