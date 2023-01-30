class Solution(object):
    def nearestValidPoint(self, x, y, points):
        temp_out = []
        min_distance = 10001
        count = 0
        for  i in points:
           
            if i[0]==x or i[1]==y:
                min_distance = min(min_distance,abs(x - i[0])+abs(y - i[1]))
                temp_out.append([i[0],i[1],count])
            count+=1
        if(len(temp_out)==0):
            return -1
        for i in temp_out:
            if(min_distance == abs(x - i[0])+abs(y - i[1])):
                return i[2]
