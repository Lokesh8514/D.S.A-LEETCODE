class Solution(object):
    def rearrangeArray(self, nums):
        n=len(nums)
        pos=0
        neg=1
        ans=[0]*n
        for i in range(0,n):
            if(nums[i]<0):
                ans[neg]=nums[i]
                neg+=2
            else:
                ans[pos]=nums[i]
                pos+=2
        return ans
        #uses twice the space needed
        # arrp=[]
        # arrn=[]
        # n=len(nums)
        # for i in range(0,n):
        #     if(nums[i]>0):
        #         arrp.append(nums[i])
        #     else:
        #         arrn.append(nums[i])
        # P=0
        # N=0
        # i=0
        # while(i<n):
        #     if(i % 2==0):
        #         nums[i]=arrp[P]
        #         P+=1
        #     else:
        #         nums[i]=arrn[N]
        #         N+=1
        #     i+=1
        # return nums

        """
        :type nums: List[int]
        :rtype: List[int]
        """
        