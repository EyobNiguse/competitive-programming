class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        size = len(nums)
        for i in range(size-1):
            if(nums[i] == nums[i+1]):
                nums[i]*=2
                nums[i+1]=0
        l  = 0
        r =  size-1
        count = 0
        for x in nums:
            if (x == 0):
                count+=1
        output = []
        for x in nums:
            if(not x == 0):
                output.append(x)
        for x in range(count):
            output.append(0)
        # print(output)
    
        return(output)
