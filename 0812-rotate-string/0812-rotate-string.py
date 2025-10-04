class Solution(object):
    def rotateString(self, s, goal):
        if len(s)!=len(goal):
            return False
        
        ch=goal[0]
        for i in range(len(s)):
            if s[i]==ch:
                p1=s[i:len(s)]
                p2=s[:i]
                if p1+p2==goal:
                    return True
        return False
        
        """
        :type s: str
        :type goal: str
        :rtype: bool
        """
        