class Solution(object):
    def majorityElement(self, nums):
        count=1
        candidate=nums[0]
        n=len(nums)
        for i in range(1,n):
            if nums[i]==candidate:
                count+=1
            else:
                count-=1
            if count==0:
                candidate=nums[i]
                count=1
        return candidate
        # mymap={}
        # n=len(nums)
        # if(n==1):
        #     return nums[0]

        # for i in range(0,n):
        #     if nums[i] in mymap:
        #         mymap[nums[i]]+=1
        #         if(mymap[nums[i]]> n//2):
        #             return nums[i]
        #     else:
        #         mymap[nums[i]]=1
        # return -1
        """
        :type nums: List[int]
        :rtype: int
        """
        