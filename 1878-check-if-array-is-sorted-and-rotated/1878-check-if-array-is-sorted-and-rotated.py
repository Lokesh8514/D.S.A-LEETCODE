class Solution(object):
    def check(self, nums):
        n=len(nums)
        if(n<1):
            return true
        inversion_count=0
        for i in range(0,n-1):
            if(nums[i]>nums[i+1]):
                inversion_count+=1
        if(nums[n-1]>nums[0]):
            inversion_count+=1
        
        return inversion_count<=1
        """
        :type nums: List[int]
        :rtype: bool
        """
        