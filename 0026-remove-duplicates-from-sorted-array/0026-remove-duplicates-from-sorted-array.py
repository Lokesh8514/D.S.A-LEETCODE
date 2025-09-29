class Solution(object):
    def removeDuplicates(self, nums):
        if not nums:
            return 0
        k=0
        for i in range(1,len(nums)):
            if(nums[i]!=nums[k]):
                nums[k+1]=nums[i]
                k+=1
        return k+1
        """
        :type nums: List[int]
        :rtype: int
        """
        