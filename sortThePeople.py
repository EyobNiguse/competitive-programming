 
class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        temp_dict = {}
        for x in range(len(heights)):
            temp_dict[heights[x]] = names[x]
        heights.sort()
        heights.reverse()
        for x in range(len(heights)):
            names[x] = temp_dict[heights[x]]
        return names
