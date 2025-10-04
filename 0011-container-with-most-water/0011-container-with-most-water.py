class Solution(object):
    def maxArea(self, height):
        n=len(height)
        area=0
        maxarea=-1e9
        i=0
        j=n-1
        while(i<j):
            area=min(height[i],height[j])*(j-i)
            maxarea=max(area,maxarea)
            if(height[i]<=height[j]):
                i+=1
            else:
                j-=1
        return maxarea
        """
        :type height: List[int]
        :rtype: int
        """
        