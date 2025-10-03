class Solution(object):
    def rearrangeArray(self, nums):
        arrp=[]
        arrn=[]
        n=len(nums)
        for i in range(0,n):
            if(nums[i]>0):
                arrp.append(nums[i])
            else:
                arrn.append(nums[i])
        P=0
        N=0
        i=0
        while(i<n):
            if(i % 2==0):
                nums[i]=arrp[P]
                P+=1
            else:
                nums[i]=arrn[N]
                N+=1
            i+=1
        return nums

        """
        :type nums: List[int]
        :rtype: List[int]
        """
        