class Solution(object):

    def hasIncreasingSubarrays(self, nums, k):
        if len(nums)<2*k:
            return False
        def isincreasing(nums,s,k):
            for i in range(s,s+k-1):
                if(nums[i]>=nums[i+1]):
                    return False
            return True
        l=len(nums)-(2*k)+1
        for i in range(0,l):
            if(isincreasing(nums,i,k)and isincreasing(nums,i+k,k)):
                return True
        return False

        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        