class Solution:
    def reverseString(self, s: List[str]) -> None:
        n = len(s)//2
        for x in range(n):
           temp = s[x]
           s[x] = s[len(s)-x-1]
           s[len(s)-x-1] = temp
