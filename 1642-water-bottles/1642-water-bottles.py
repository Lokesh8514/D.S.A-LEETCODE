class Solution(object):
    def numWaterBottles(self, numBottles, numExchange):
        eb=numBottles
        fb=0
        ans=numBottles
        while(eb>=numExchange):
            ans+=eb//numExchange
            fb=eb//numExchange
            eb%=numExchange
            eb+=fb
            fb=0
        
        return ans
        """
        :type numBottles: int
        :type numExchange: int
        :rtype: int
        """
        