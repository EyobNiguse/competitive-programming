class Solution(object):
    def findTheDifference(self, s, t):
        for i in s:
            if(i in t):
                print(i)
                t = t.replace(i,"",1)
        return t
