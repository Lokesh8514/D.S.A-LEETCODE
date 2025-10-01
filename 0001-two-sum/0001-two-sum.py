class Solution(object):
    def twoSum(self, nums, target):
        mylist={}
        for i in range(len(nums)):
            if(target-nums[i]) in mylist:
                return i,mylist[target-nums[i]]
            else:
                mylist[nums[i]]=i
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        