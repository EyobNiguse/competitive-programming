class Solution(object):
    def appendCharacters(self, s, t):
        l = 0
        r = 0
        while(l < len(s)):
            print(r)
            print(l)
            if(r < len(t) and t[r] == s[l]):
                r += 1
            l +=1
        return len(t) - r
