class Solution(object):
    def maxBottlesDrunk(self, numBottles, x):
        #better version
        ans = numBottles
        while numBottles >= x:
            numBottles -= x - 1
            x += 1
            ans += 1
        return ans
        # ans=numBottles
        # eb=numBottles
        # fb=0
        # while(eb>=numExchange or fb!=0):
        #     if(eb<numExchange):
        #         eb+=fb
        #         fb=0
        #     if(eb>=numExchange):
        #         ans+=1
        #         eb-=numExchange
        #         numExchange+=1
        #         fb+=1
        # return ans

        """
        :type numBottles: int
        :type numExchange: int
        :rtype: int
        """
        