class Solution:
    def isArthimetic(self, nums:List[int])->bool:
        arr = nums
        arr.sort()
        size = len(arr)
        diff = arr[1] - arr[0]
      
        for x in range(size-1):
            if(not arr[x+1] - arr[x] == diff):
                return False
        return True
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:
        output = []
        size = len(l)
        for x in range(size):
            output.append(self.isArthimetic(nums[l[x]:r[x]+1]))
        return output
