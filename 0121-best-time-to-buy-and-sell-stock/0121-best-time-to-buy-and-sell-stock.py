class Solution(object):
    def maxProfit(self, prices):
        minprice=1e9
        maxprice=-1e9
        for i in range(len(prices)):
            minprice=min(minprice,prices[i])
            maxprice=max(maxprice,prices[i]-minprice)
        return maxprice
        """
        :type prices: List[int]
        :rtype: int
        """
        