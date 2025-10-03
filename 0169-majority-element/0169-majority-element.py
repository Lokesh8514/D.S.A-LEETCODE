class Solution(object):
    def majorityElement(self, nums):
        mymap={}
        n=len(nums)
        if(n==1):
            return nums[0]

        for i in range(0,n):
            if nums[i] in mymap:
                mymap[nums[i]]+=1
                if(mymap[nums[i]]> n//2):
                    return nums[i]
            else:
                mymap[nums[i]]=1
        return -1
        """
        :type nums: List[int]
        :rtype: int
        """
        