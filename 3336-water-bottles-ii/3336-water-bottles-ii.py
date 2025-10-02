class Solution(object):
    def maxBottlesDrunk(self, numBottles, numExchange):
        ans=numBottles
        eb=numBottles
        fb=0
        while(eb>=numExchange or fb!=0):
            if(eb<numExchange):
                eb+=fb
                fb=0
            if(eb>=numExchange):
                ans+=1
                eb-=numExchange
                numExchange+=1
                fb+=1
        return ans

        """
        :type numBottles: int
        :type numExchange: int
        :rtype: int
        """
        