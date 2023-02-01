class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        output = []
        count = 0
        while(count < len(intervals)):
            lowerBound = intervals[count][0]
            upperBound = intervals[count][1]
            r = count
            
            while( r < len(intervals)-1 and intervals[r][1] >= intervals[r+1][0]):
                upperBound = intervals[r+1][1]
                r+=1
            count = max(r,count+1)
            if len(output)==0:
                output.append([lowerBound,upperBound])
            else:
                if(output[len(output)-1][1] >= lowerBound):
                    output[len(output)-1][1] = upperBound
                else:
                    output.append([lowerBound,upperBound])
           
       
        return output
