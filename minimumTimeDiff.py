class Solution:
    def findMinDifference(self, timePoints: List[str]) -> int:
        total =  60 * 24 
        space = [False] * total
        for x in timePoints:
            y =  x.split(":")
            val  = int(y[0]) * 60 + int(y[1])
            if not space[val]:
                space[val] = True
            else:
                return 0
        prev  = -1
        first = -1
        minT = total
        for i in range(total):
            if space[i]:
                if not prev == -1:
                    minT= min(minT,i - prev)
                else:
                    first= i
                prev = i
        minT = min(minT,total - prev+ first)
        return minT
