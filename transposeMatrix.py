class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        lsm = [[] for _ in range(len(matrix[0]))]
      
        for i  in range(len(matrix)):
            for j in range(len(matrix[0])):
                lsm[j].append(matrix[i][j])
        return lsm 
