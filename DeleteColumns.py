class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        size =  len(strs[0])
        count = 0
        compare = [[] for _ in range(size)]
        for x in range(len(strs)):
            for c in range(len(strs[x])):
                compare[c].append(strs[x][c])
        for x in compare:
            temp  = sorted(x)
           
            if(not temp == x):
                count+=1
        return count
