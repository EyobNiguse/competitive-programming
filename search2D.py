class Solution(object):
    def searchMatrix(self, matrix, target):
        x = 0
        while x < (len(matrix)):
            if( target  == matrix[x][len(matrix[x])-1] ):
                return True
            if target < matrix[x][len(matrix[x])-1]:
                for y in range(len(matrix[x])):
                    if(target == matrix[x][y]):
                        return True
            while(x < len(matrix) and  target > matrix[x][len(matrix[x])-1]):
                  x+=1
            if(x < len(matrix)):
               for y in range(len(matrix[x])):
                   if(target == matrix[x][y]):
                       return True
            x+=1
        return False
