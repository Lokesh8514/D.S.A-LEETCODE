class Solution(object):
    def sortColors(self, nums):
        i=0
        l=0
        r=len(nums)-1
        while(i<=r):
            if(nums[i]==0):
                nums[i],nums[l]=nums[l],nums[i]
                i+=1
                l+=1
            elif(nums[i]==1):
                i+=1
            elif(nums[i]==2):
                nums[i],nums[r]=nums[r],nums[i]
                r-=1
            
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        