class Solution(object):
    def isSubsequence(self, s, t):
        fast=0
        slow=0
        count = 0
        while(fast < len(t)):
                while (slow < len(s) and fast < len(t) and s[slow]!= t[fast]):
                    fast+=1
                if(slow < len(s) and  fast < len(t) and  s[slow]==t[fast]):
                    count+=1    
                slow+=1
                fast+=1

        if(count==len(s)):
            return True
        else:
            return False
