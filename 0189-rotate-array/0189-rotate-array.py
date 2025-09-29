class Solution(object):
    def rotate(self, nums, k):
        k%=len(nums)
        # n=len(nums)
        # print(nums[n-k:]+nums[:n-k])
        # return {}
        n=len(nums)
        nums[:]=nums[::-1]
        part1=nums[:k]
        part1.reverse()
        nums[:k]=part1
        part2=nums[k:n]
        part2.reverse()
        nums[k:n]=part2
        print(nums)
        return nums
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        